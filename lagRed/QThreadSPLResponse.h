#pragma once

#include "QThreadSPL.h"
#include "SystemCall.h"
#include <queue>

#define MAX_PACKET_RESPONSE 1000

class QThreadSPLResponse: public QThreadSPL
{
	Q_OBJECT
private:
	int lag; // tiempo de espera antes de enviar el mensaje
	int lossRate; // tasa de paquetes eliminados por segundo
	class Message {
		public:
			unsigned long timeStamp;
			SPLStandardMessage package;
			Message(SPLStandardMessage p) : package(p) { timeStamp = SystemCall::getCurrentSystemTime(); };
	};

	std::queue<Message> queueMessage;
public:
	QThreadSPLResponse() : QThreadSPL(), lag(500), lossRate(0), queueMessage() {};
	void setLag(int l){ lag = l; };
	void setLossRate(int rate){ lossRate = rate; };
	void run();
signals:
	void print(QString str);
public slots:
	void pushMessage(SPLStandardMessage p);
	void changeLag(int l);
	void changeLossRate(int rate);
};