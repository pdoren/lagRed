#pragma once

#include "QThreadSPL.h"

class QThreadSPLRequest: public QThreadSPL
{
	Q_OBJECT
public:
	QThreadSPLRequest() : QThreadSPL() {};
public:
	void run();
signals:
	void sendMessage(SPLStandardMessage p);
};
