#include "lagred.h"

lagRed::lagRed(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

lagRed::~lagRed()
{

}

void lagRed::changeLagLabel(int lag)
{
	this->getUI().labelLag->setText(QString::number(lag) + " [mseg]");
}

void lagRed::changeLossRateLabel(int rate)
{
	this->getUI().labelLossRate->setText(QString::number(rate) + " [1/s]");
}

void lagRed::setLag(int lag, int maxLag, int minLag)
{
	this->getUI().horizontalSliderLag->setMaximum(maxLag);
	this->getUI().horizontalSliderLag->setMinimum(minLag);
	this->getUI().horizontalSliderLag->setValue(lag);
	this->getUI().labelLag->setText(QString::number(lag) + " [mseg]");
}

void lagRed::setLossRate(int rate, int maxRate, int minRate)
{
	this->getUI().horizontalSliderLossRate->setMaximum(maxRate);
	this->getUI().horizontalSliderLossRate->setMinimum(minRate);
	this->getUI().horizontalSliderLossRate->setValue(rate);
	this->getUI().labelLossRate->setText(QString::number(rate) + " [1/s]");
}
