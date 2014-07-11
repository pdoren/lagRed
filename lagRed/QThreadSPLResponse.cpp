#include "QThreadSPLResponse.h"
#include "SystemCall.h"

void QThreadSPLResponse::run()
{
	unsigned long diffTimeStamp;
	int roundTripApprox = 150; // en milisegundos
	while(true){
		if(!queueMessage.empty()){
			if((std::rand() % 100) <= lossRate){
				queueMessage.pop();
			}else{
				QThreadSPLResponse::Message& msg = queueMessage.front();
				diffTimeStamp = SystemCall::getTimeSince(msg.timeStamp) - roundTripApprox;
				if(diffTimeStamp >= lag){
					if(socket.write((const char *) &msg.package, SPL_MESSAGE_BUFFER_SIZE)){
						emit print(QString("Se envio el mensaje "));
					}else{
						emit print(QString("No se pudo enviar el mensaje"));
					}
					queueMessage.pop();
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