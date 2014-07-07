#ifndef LAGRED_H
#define LAGRED_H

#include <QtWidgets/QMainWindow>
#include "ui_lagred.h"

class lagRed : public QMainWindow
{
	Q_OBJECT

public:
	lagRed(QWidget *parent = 0);
	~lagRed();
	Ui::lagRedClass& getUI(){ return ui;};
	void setLag(int lag, int maxLag, int minLag);
	void setLossRate(int rate, int maxRate, int minRate);
private:
	Ui::lagRedClass ui;
public slots:
	void changeLagLabel(int lag);
	void changeLossRateLabel(int rate);
};

#endif // LAGRED_H
