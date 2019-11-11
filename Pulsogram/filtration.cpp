#include "filtration.h"
#include "ui_filtration.h"
#include <QDebug>

Filtration::Filtration(QVector<double> &x, QVector<double> &y, int c, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Filtration),
    xVals(x), yVals(y), Cycles(c),
    xFAlpha(x), yFAlpha(y),
    xFWidth(x), yFWidth(y)
{
    ui->setupUi(this);

    ui->rbExp->setChecked(true);
    SelectedRB = "a";
    ui->AlphaSlider->setEnabled(true);
    ui->WidthSlider->setEnabled(false);

    ui->AlphaSlider->setRange(1,100);
    ui->AlphaSlider->setValue(10);

    ui->WidthSlider->setRange(1,100);
    ui->WidthSlider->setValue(20);

    yFAlpha.clear();
    yFAlpha = ExSmoothM(yVals);
    qDebug() << "\n\n" << yFAlpha;
    Build();

}

Filtration::~Filtration()
{
    delete ui;
}


void Filtration::Build()
{
    ui->Graph->clearGraphs();
    ui->Graph->addGraph();
    if(SelectedRB=="a")
    {
        ui->Graph->graph(0)->setData(xFAlpha, yFAlpha);
        qDebug() << "built alpha";
    }
    else if(SelectedRB=="w")
    {
        ui->Graph->graph(0)->setData(xVals, yFWidth);
        qDebug() << "w";
    }
    else
    {
        ui->Graph->graph(0)->setData(xVals, yVals);
        qDebug() << "shit";
    }

    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(24, 180, 50));
    ui->Graph->graph(0)->setPen(pen);

    ui->Graph->xAxis->setRange(0, Cycles);

    ui->Graph->yAxis->setRange(-1.1, 1.1);

    ui->Graph->replot();
}

//=====================================================================

void Filtration::on_rbExp_toggled(bool checked)
{
    ui->AlphaSlider->setEnabled(true);
    ui->WidthSlider->setEnabled(false);
    SelectedRB = "a";

    yFAlpha = ExSmoothM(yVals);
    Build();
}

void Filtration::on_rbWidth_toggled(bool checked)
{
    ui->AlphaSlider->setEnabled(false);
    ui->WidthSlider->setEnabled(true);
    SelectedRB = "w";
    yFWidth.clear();
    yFWidth = MiddMeth(yVals);
    Build();

}

//=====================================================================

QVector<double> Filtration::ExSmoothM(QVector<double> z)
{
    double size = z.size();

    double sum = 0;

    for (int i=1; i < z.size(); ++i)
    {
        if(z[i]==NULL)
            continue;
        sum = sum + z[i];
    }

    double Uo = sum / size;
    bool first = true;

    double yt;
    double Utp1;

    QVector<double> res;
    res.push_back(Uo);
    for (auto it = z.begin(); it != z.end(); ++it)
    {
        if (first == true)
        {

            yt = *it;
            Utp1 = alpha * yt + (1 - alpha)* Uo;
            first = false;
        }
        else
        {
            res.push_back(Utp1);
            Utp1 = alpha * yt + (1 - alpha)* Utp1;
            yt = *it;
        }
    }
    return res;
}

QVector<double> Filtration::MiddMeth(QVector<double> z) {
    double sum = 0;
    int size = z.size();

    for (auto it = z.begin(); it != z.end(); ++it)
        sum = sum + *it;

    double Uo = sum / size;
    double Wo = 3;

    QVector<double> res;
    for  (int i =0 ; i<=Wo ; i++ )
        res.push_back(Uo);


    double m = width;

    for (int i =Wo+1 ; i< size - Wo - 1 ; i++)
    {
        res.push_back(res[i - 1] + m * (z[i + Wo] - z[i - 1 - Wo]));
    }

    return res;
}


void Filtration::on_AlphaSlider_valueChanged(int value)
{
    double buf = ui->AlphaSlider->value();
    alpha = buf/100;
    yFAlpha = ExSmoothM(yVals);
    Build();
}

void Filtration::on_WidthSlider_valueChanged(int value)
{
    double buf = ui->WidthSlider->value();
    width = buf/400;
    yFWidth.clear();
    yFWidth = MiddMeth(yVals);
    Build();
}
