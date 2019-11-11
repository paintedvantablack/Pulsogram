/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Window2
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *Graph;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *Cycles;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSlider *Alternation;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSlider *Noise;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Window2)
    {
        if (Window2->objectName().isEmpty())
            Window2->setObjectName(QString::fromUtf8("Window2"));
        Window2->resize(1200, 400);
        Window2->setMinimumSize(QSize(800, 300));
        centralwidget = new QWidget(Window2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Graph = new QCustomPlot(centralwidget);
        Graph->setObjectName(QString::fromUtf8("Graph"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Graph->sizePolicy().hasHeightForWidth());
        Graph->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(Graph);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(label);

        Cycles = new QSpinBox(centralwidget);
        Cycles->setObjectName(QString::fromUtf8("Cycles"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Cycles->sizePolicy().hasHeightForWidth());
        Cycles->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(Cycles);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        Alternation = new QSlider(centralwidget);
        Alternation->setObjectName(QString::fromUtf8("Alternation"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Alternation->sizePolicy().hasHeightForWidth());
        Alternation->setSizePolicy(sizePolicy3);
        Alternation->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(Alternation);


        horizontalLayout->addLayout(verticalLayout_4);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        Noise = new QSlider(centralwidget);
        Noise->setObjectName(QString::fromUtf8("Noise"));
        sizePolicy3.setHeightForWidth(Noise->sizePolicy().hasHeightForWidth());
        Noise->setSizePolicy(sizePolicy3);
        Noise->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(Noise);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(10, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_6->addItem(verticalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
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

        verticalLayout_6->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        Window2->setCentralWidget(centralwidget);

        retranslateUi(Window2);

        QMetaObject::connectSlotsByName(Window2);
    } // setupUi

    void retranslateUi(QMainWindow *Window2)
    {
        Window2->setWindowTitle(QCoreApplication::translate("Window2", "Alternation", nullptr));
        label->setText(QCoreApplication::translate("Window2", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\206\320\270\320\272\320\273\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("Window2", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\206\320\270\320\270 T", nullptr));
        label_3->setText(QCoreApplication::translate("Window2", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\210\321\203\320\274\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Window2", "\320\241\320\263\320\273\320\260\320\266\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window2: public Ui_Window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H
