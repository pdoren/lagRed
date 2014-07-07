#include "QThreadSPLRequest.h"
#include "SPLStandardMessage.h"
#include "SystemCall.h"

#include <QTextStream>

void QThreadSPLRequest::run()
{
	char buffer[SPL_MESSAGE_BUFFER_SIZE];
	SPLStandardMessage package = SPLStandardMessage();
	unsigned int remoteIp = 0;
	unsigned int localIp = SystemCall::getHostAddrInt();
	const int teamCommHeaderSize = 8;
	int size;
	QString strMessage; 
	QTextStream textStream(&strMessage);
	while(true){
		do
		{
			size = socket.read(buffer, SPL_MESSAGE_BUFFER_SIZE, remoteIp);
			if(size == SPL_MESSAGE_BUFFER_SIZE && remoteIp != localIp)
			{
				std::memcpy(&package, buffer, size);
				if(std::strcmp(package.header,"SPL")){
					QString prompt = ">" + QString::number(SystemCall::getCurrentSystemTime()) + "$ ";
					textStream << prompt << "IP Remote:      " << SystemCall::getAddr(remoteIp) << endl;
					textStream << prompt << "LocalID:        " << ((unsigned short*)package.data)[3] << endl;
					textStream << prompt << "Num Robot:      " << package.playerNum << endl;
					textStream << prompt << "Send TimeStamp: " << ((unsigned int*)package.data)[0] << endl; // the send time stamp
					textStream << prompt << "Size Data:      " << ((unsigned short*)package.data)[2] << endl;

					/*textStream << prompt << (unsigned char) package.playerNum;
					textStream << prompt << (unsigned char) package.team;
					textStream << prompt << package.ball[0];
					textStream << prompt << package.ball[1];
					textStream << prompt << package.ballVel[0];
					textStream << prompt << package.ballVel[1];
					textStream << prompt << (int) package.ballAge;
					textStream << prompt << package.pose[0];
					textStream << prompt << package.pose[1];
					textStream << prompt << package.pose[2];
					textStream << prompt << package.shootingTo;
					textStream << prompt << package.walkingTo;
					textStream << prompt << (unsigned char) package.fallen;*/

					emit print(textStream.readAll());
					textStream.flush();
					
					emit sendMessage(package);
				}
			}
		}
		while(size > 0);
	}
}
