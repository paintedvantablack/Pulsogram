/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *Graph;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QRadioButton *Prb;
    QRadioButton *Qrb;
    QRadioButton *Rrb;
    QRadioButton *Srb;
    QRadioButton *STrb;
    QRadioButton *Trb;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSlider *Amplitude;
    QLabel *label_5;
    QSlider *Time;
    QLabel *label_6;
    QSlider *Width1;
    QSlider *Width2;
    QFrame *line;
    QLabel *label_2;
    QSpinBox *BPM;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(848, 529);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Graph = new QCustomPlot(centralWidget);
        Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->setMinimumSize(QSize(500, 300));

        horizontalLayout->addWidget(Graph);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_3);

        Prb = new QRadioButton(centralWidget);
        Prb->setObjectName(QString::fromUtf8("Prb"));
        sizePolicy1.setHeightForWidth(Prb->sizePolicy().hasHeightForWidth());
        Prb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(Prb);

        Qrb = new QRadioButton(centralWidget);
        Qrb->setObjectName(QString::fromUtf8("Qrb"));
        sizePolicy1.setHeightForWidth(Qrb->sizePolicy().hasHeightForWidth());
        Qrb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(Qrb);

        Rrb = new QRadioButton(centralWidget);
        Rrb->setObjectName(QString::fromUtf8("Rrb"));
        sizePolicy1.setHeightForWidth(Rrb->sizePolicy().hasHeightForWidth());
        Rrb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(Rrb);

        Srb = new QRadioButton(centralWidget);
        Srb->setObjectName(QString::fromUtf8("Srb"));
        sizePolicy1.setHeightForWidth(Srb->sizePolicy().hasHeightForWidth());
        Srb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(Srb);

        STrb = new QRadioButton(centralWidget);
        STrb->setObjectName(QString::fromUtf8("STrb"));
        sizePolicy1.setHeightForWidth(STrb->sizePolicy().hasHeightForWidth());
        STrb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(STrb);

        Trb = new QRadioButton(centralWidget);
        Trb->setObjectName(QString::fromUtf8("Trb"));
        sizePolicy1.setHeightForWidth(Trb->sizePolicy().hasHeightForWidth());
        Trb->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(Trb);


        gridLayout->addLayout(verticalLayout_7, 0, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);

        verticalLayout_6->addWidget(label_4);

        Amplitude = new QSlider(centralWidget);
        Amplitude->setObjectName(QString::fromUtf8("Amplitude"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Amplitude->sizePolicy().hasHeightForWidth());
        Amplitude->setSizePolicy(sizePolicy2);
        Amplitude->setMaximumSize(QSize(250, 16777215));
        Amplitude->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(Amplitude);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);

        verticalLayout_6->addWidget(label_5);

        Time = new QSlider(centralWidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        sizePolicy2.setHeightForWidth(Time->sizePolicy().hasHeightForWidth());
        Time->setSizePolicy(sizePolicy2);
        Time->setMaximumSize(QSize(250, 16777215));
        Time->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(Time);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);

        verticalLayout_6->addWidget(label_6);

        Width1 = new QSlider(centralWidget);
        Width1->setObjectName(QString::fromUtf8("Width1"));
        sizePolicy2.setHeightForWidth(Width1->sizePolicy().hasHeightForWidth());
        Width1->setSizePolicy(sizePolicy2);
        Width1->setMaximumSize(QSize(250, 16777215));
        Width1->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(Width1);

        Width2 = new QSlider(centralWidget);
        Width2->setObjectName(QString::fromUtf8("Width2"));
        sizePolicy2.setHeightForWidth(Width2->sizePolicy().hasHeightForWidth());
        Width2->setSizePolicy(sizePolicy2);
        Width2->setMaximumSize(QSize(250, 16777215));
        Width2->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(Width2);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        BPM = new QSpinBox(centralWidget);
        BPM->setObjectName(QString::fromUtf8("BPM"));
        sizePolicy1.setHeightForWidth(BPM->sizePolicy().hasHeightForWidth());
        BPM->setSizePolicy(sizePolicy1);
        BPM->setMinimumSize(QSize(50, 0));

        verticalLayout->addWidget(BPM);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMaximumSize(QSize(317, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"height: 18px;\n"
"    padding: 2px 8px;\n"
"    border: 1px solid #C9C9C9;\n"
"    background: -moz-linear-gradient(top, #F2F2F2 0%, #EBEBEB 50%, #DDDDDD 51%, #CFCFCF 100%);\n"
"    font: normal 12px sans-serif;\n"
"    color: black;\n"
"    text-decoration: none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border: 1px solid #ACE8F0;\n"
"    background: -moz-linear-gradient(top, #EAF6FD 0%, #D9F0FC 50%, #BEE6FD 51%, #A7D9F5 100%);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"padding: 2px 7px 3px 9px;\n"
"    border: 1px solid #73A7C4;\n"
"    border-bottom: 0;\n"
"    background: -moz-linear-gradient(top, #E5F4FC 0%, #C4E5F6 50%, #98D1EF 51%, #68B3DB 100%);\n"
"}"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ECG", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "        \320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\274\320\276\320\264\320\265\320\273\320\270        ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\227\321\203\320\261\320\265\321\206", nullptr));
        Prb->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        Qrb->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        Rrb->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        Srb->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        STrb->setText(QCoreApplication::translate("MainWindow", "ST", nullptr));
        Trb->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\241\320\241, \321\203\320\264./\320\274\320\270\320\275", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
