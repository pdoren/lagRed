#include "QThreadSPLResponse.h"
#include "SystemCall.h"

void QThreadSPLResponse::run()
{
	unsigned long diffTimeStamp;
	unsigned long lastSendMessage = 0;
	int roundTripApprox = 150; // en milisegundos
	int numDeleteMessage = 0;
	while(true){
		if(!queueMessage.empty()){
			if((numDeleteMessage < lossRate) && (SystemCall::getTimeSince(lastSendMessage) < 1000)){
				queueMessage.pop();
				numDeleteMessage++;
			}else{
				QThreadSPLResponse::Message& msg = queueMessage.front();
				diffTimeStamp = SystemCall::getTimeSince(msg.timeStamp) - roundTripApprox;
				if(diffTimeStamp >= lag){
					if(socket.write((const char *) &msg.package, SPL_MESSAGE_BUFFER_SIZE)){
						emit print(QString("Se envio el mensaje "));
						lastSendMessage = SystemCall::getCurrentSystemTime();
					}else{
						emit print(QString("No se pudo enviar el mensaje"));
					}
					queueMessage.pop();
					numDeleteMessage = 0;
				}
			}
		}
	}
}

void QThreadSPLResponse::pushMessage(SPLStandardMessage p){
	queueMessage.push(QThreadSPLResponse::Message(p));
}

void QThreadSPLResponse::changeLag(int l){
	lag = l;
}

void QThreadSPLResponse::changeLossRate(int rate){
	lossRate = rate;
}