#pragma once

#include <QThread>
#include <QRunnable>
#include "UdpComm.h"
#include "SPLStandardMessage.h"

#define BROADCAST_ADDR "192.168.21.255"
#define PORT_TEAM 12100
#define SPL_MESSAGE_BUFFER_SIZE int(sizeof(SPLStandardMessage))

class QThreadSPL: public QObject, public QRunnable
{
	Q_OBJECT
public:
	QThreadSPL() : QRunnable(), socket() {};
protected:
	UdpComm socket;
public:
	void start() {
		startSocket();
	};
signals:
	void print(QString str);
protected:
	bool startSocket();
};