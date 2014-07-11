#include <QtWidgets/QApplication>
#include <QObject>
#include "lagred.h"
#include "QThreadSPLRequest.h"
#include "QThreadSPLResponse.h"
#include "SPLStandardMessage.h"
#include <QThreadPool>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	lagRed w;
	QThreadSPLRequest* threadSPLRequest = new QThreadSPLRequest();
	QThreadSPLResponse* threadSPLResponse = new QThreadSPLResponse();

	w.setLag(500,2000,0);
	w.setLossRate(0,100,0);
	threadSPLResponse->setLossRate(0);
	threadSPLResponse->setLag(500);



	QVector <QPointF> points;

    // Fill in points with n number of points
    for(int i = 0; i< 5; i++)
       points.append(QPointF(i*5, i*5));

    // Create a view, put a scene in it and add tiny circles
    // in the scene
    QGraphicsScene * scene = new QGraphicsScene();

	scene->addSimpleText(QString("Robot 1"));

	scene->addLine(0, 0, -50, 0);
    scene->addLine(-50, 0, -50, -50);
    scene->addLine(-50, -50, 0, 0);

    for(int i = 0; i< points.size(); i++)
        scene->addEllipse(points[i].x(), points[i].y(), 10, 10);

	
	w.show();

	 w.getUI().graphicsView->setScene(scene);

	QObject::connect(threadSPLRequest, SIGNAL(print(QString)), w.getUI().textEditRequest, SLOT(append(QString)), Qt::QueuedConnection);
	QObject::connect(threadSPLResponse, SIGNAL(print(QString)), w.getUI().textEditResponse, SLOT(append(QString)), Qt::QueuedConnection);
	QObject::connect(threadSPLRequest, SIGNAL(sendMessage(SPLStandardMessage)), threadSPLResponse, SLOT(pushMessage(SPLStandardMessage)), Qt::DirectConnection);
	QObject::connect(w.getUI().horizontalSliderLag, SIGNAL(valueChanged(int)), threadSPLResponse, SLOT(changeLag(int)), Qt::DirectConnection);
	QObject::connect(w.getUI().horizontalSliderLag, SIGNAL(valueChanged(int)), &w, SLOT(changeLagLabel(int)), Qt::DirectConnection);
	QObject::connect(w.getUI().horizontalSliderLossRate, SIGNAL(valueChanged(int)), threadSPLResponse, SLOT(changeLossRate(int)), Qt::DirectConnection);
	QObject::connect(w.getUI().horizontalSliderLossRate, SIGNAL(valueChanged(int)), &w, SLOT(changeLossRateLabel(int)), Qt::DirectConnection);
	
	threadSPLRequest->start();
	threadSPLResponse->start();

	QThreadPool *pool = new QThreadPool();

	pool->setMaxThreadCount(2);
	pool->start(threadSPLResponse);
	pool->start(threadSPLRequest);

	return a.exec();
}
