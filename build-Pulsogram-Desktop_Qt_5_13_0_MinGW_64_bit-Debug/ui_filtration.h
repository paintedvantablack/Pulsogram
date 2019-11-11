/********************************************************************************
** Form generated from reading UI file 'filtration.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTRATION_H
#define UI_FILTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Filtration
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *Graph;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSlider *AlphaSlider;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSlider *WidthSlider;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbExp;
    QRadioButton *rbWidth;

    void setupUi(QMainWindow *Filtration)
    {
        if (Filtration->objectName().isEmpty())
            Filtration->setObjectName(QString::fromUtf8("Filtration"));
        Filtration->resize(1200, 400);
        Filtration->setMinimumSize(QSize(800, 300));
        Filtration->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(Filtration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
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

        AlphaSlider = new QSlider(centralwidget);
        AlphaSlider->setObjectName(QString::fromUtf8("AlphaSlider"));
        AlphaSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(AlphaSlider);


        horizontalLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(label_2);

        WidthSlider = new QSlider(centralwidget);
        WidthSlider->setObjectName(QString::fromUtf8("WidthSlider"));
        WidthSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(WidthSlider);


        horizontalLayout->addLayout(verticalLayout_3);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setStyleSheet(QString::fromUtf8("border: 2px solid #678faa;"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, -1, -1, -1);
        rbExp = new QRadioButton(centralwidget);
        rbExp->setObjectName(QString::fromUtf8("rbExp"));

        verticalLayout_4->addWidget(rbExp);

        rbWidth = new QRadioButton(centralwidget);
        rbWidth->setObjectName(QString::fromUtf8("rbWidth"));

        verticalLayout_4->addWidget(rbWidth);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        Filtration->setCentralWidget(centralwidget);

        retranslateUi(Filtration);

        QMetaObject::connectSlotsByName(Filtration);
    } // setupUi

    void retranslateUi(QMainWindow *Filtration)
    {
        Filtration->setWindowTitle(QCoreApplication::translate("Filtration", "Smoothing", nullptr));
        label->setText(QCoreApplication::translate("Filtration", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\260\320\273\321\214\321\204\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Filtration", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\276\320\272\320\275\320\260", nullptr));
        rbExp->setText(QCoreApplication::translate("Filtration", "\320\255\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\320\265 \321\201\320\263\320\273\320\260\320\266\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
        rbWidth->setText(QCoreApplication::translate("Filtration", "\320\241\320\272\320\276\320\273\321\214\320\267\321\217\321\211\320\265\320\265 \321\201\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Filtration: public Ui_Filtration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTRATION_H
