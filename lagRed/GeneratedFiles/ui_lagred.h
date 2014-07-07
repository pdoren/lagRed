/********************************************************************************
** Form generated from reading UI file 'lagred.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAGRED_H
#define UI_LAGRED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lagRedClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEditRequest;
    QTextEdit *textEditResponse;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderLag;
    QLabel *labelLagTitle;
    QLabel *labelLag;
    QLabel *labelLossRateTitle;
    QSlider *horizontalSliderLossRate;
    QLabel *labelLossRate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lagRedClass)
    {
        if (lagRedClass->objectName().isEmpty())
            lagRedClass->setObjectName(QStringLiteral("lagRedClass"));
        lagRedClass->resize(643, 458);
        centralWidget = new QWidget(lagRedClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEditRequest = new QTextEdit(centralWidget);
        textEditRequest->setObjectName(QStringLiteral("textEditRequest"));

        horizontalLayout->addWidget(textEditRequest);

        textEditResponse = new QTextEdit(centralWidget);
        textEditResponse->setObjectName(QStringLiteral("textEditResponse"));

        horizontalLayout->addWidget(textEditResponse);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout_2->addWidget(graphicsView);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSliderLag = new QSlider(centralWidget);
        horizontalSliderLag->setObjectName(QStringLiteral("horizontalSliderLag"));
        horizontalSliderLag->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderLag, 0, 1, 1, 1);

        labelLagTitle = new QLabel(centralWidget);
        labelLagTitle->setObjectName(QStringLiteral("labelLagTitle"));

        gridLayout->addWidget(labelLagTitle, 0, 0, 1, 1);

        labelLag = new QLabel(centralWidget);
        labelLag->setObjectName(QStringLiteral("labelLag"));

        gridLayout->addWidget(labelLag, 0, 2, 1, 1);

        labelLossRateTitle = new QLabel(centralWidget);
        labelLossRateTitle->setObjectName(QStringLiteral("labelLossRateTitle"));

        gridLayout->addWidget(labelLossRateTitle, 1, 0, 1, 1);

        horizontalSliderLossRate = new QSlider(centralWidget);
        horizontalSliderLossRate->setObjectName(QStringLiteral("horizontalSliderLossRate"));
        horizontalSliderLossRate->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderLossRate, 1, 1, 1, 1);

        labelLossRate = new QLabel(centralWidget);
        labelLossRate->setObjectName(QStringLiteral("labelLossRate"));

        gridLayout->addWidget(labelLossRate, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lagRedClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(lagRedClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 21));
        lagRedClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lagRedClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        lagRedClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(lagRedClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        lagRedClass->setStatusBar(statusBar);

        retranslateUi(lagRedClass);

        QMetaObject::connectSlotsByName(lagRedClass);
    } // setupUi

    void retranslateUi(QMainWindow *lagRedClass)
    {
        lagRedClass->setWindowTitle(QApplication::translate("lagRedClass", "lagRed", 0));
        labelLagTitle->setText(QApplication::translate("lagRedClass", "Lag (milisegundos): ", 0));
        labelLag->setText(QApplication::translate("lagRedClass", "TextLabel", 0));
        labelLossRateTitle->setText(QApplication::translate("lagRedClass", "Tasa Perdida:", 0));
        labelLossRate->setText(QApplication::translate("lagRedClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class lagRedClass: public Ui_lagRedClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAGRED_H
