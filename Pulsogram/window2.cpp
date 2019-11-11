#include "window2.h"
#include "ui_window2.h"

Window2::Window2(QVector<double> xP_, QVector<double> yP_, QVector<double> xQ_, QVector<double> yQ_, QVector<double> xR_, QVector<double> yR_, QVector<double> xS_, QVector<double> yS_, QVector<double> xST_, QVector<double> yST_, QVector<double> xT_, QVector<double> yT_, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window2)
{
    ui->setupUi(this);
    srand(time(0));


    xP=xP_; yP=yP_;
    xQ=xQ_; yQ=yQ_;
    xR=xR_; yR=yR_;
    xS=xS_; yS=yS_;
    xST=xST_; yST=yST_;
    xT=xT_; yT=yT_;
    xTa=xT_; yTa=yT_;

    ui->Noise->setRange(0,100);
    ui->Alternation->setRange(-270,270);
    ui->Alternation->setValue(100);
    ui->Cycles->setRange(4,10);
    ui->Cycles->setValue(Cycles);

    ResCount();
    ResAltCount();
    FullCount();

    Build();


    //qDebug() << rand()%200 - 100 << rand()%200 - 100 << rand()%200 - 100 << rand()%200 - 100;
}

Window2::~Window2()
{
    delete ui;
}

void Window2::AltDeform()
{
    for(int i=0; i<yTa.length(); i++)
    {
        yTa[i] = yT[i]*(AltVal/100);
    }

}

void Window2::Build()
{
    ui->Graph->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->Graph->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->Graph->graph(0)->setData(xFull, yFull);
    //qDebug() << xFull <<"\n";
    //qDebug() << yFull;

    //Устанавливаем цвет линии
    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(24, 180, 50));
    ui->Graph->graph(0)->setPen(pen);

    //Установим область, которая будет показываться на графике
    ui->Graph->xAxis->setRange(0, Cycles);//Для оси Ox

    ui->Graph->yAxis->setRange(-1.1, 1.1);

    //И перерисуем график на нашем widget
    ui->Graph->replot();
}

//------------------------------------------------------------------------------------
QVector<double> Window2::VecSum(QVector<double> x1, QVector<double> x2)
{
    QVector<double> xRes;
    for(int i=0; i<x1.size(); ++i)
    {
        xRes.push_back(x1[i]+x2[i]);
    }
    return xRes;
}

QVector<double> Window2::VecRes(QVector<double> yP, QVector<double> yQ, QVector<double> yR, QVector<double> yS, QVector<double> yST, QVector<double> yT)
{
    return(VecSum(yP,VecSum(yQ,VecSum(yR,VecSum(yS,VecSum(yST,yT))))));
}

void Window2::ResCount()
{
    xRes.clear();
    yRes.clear();

    xRes=xP;
    yRes=VecRes(yP, yQ, yR, yS, yST, yT);
}

void Window2::ResAltCount()
{
    xResAlt.clear();
    yResAlt.clear();

    xResAlt=xP;
    yResAlt=VecRes(yP, yQ, yR, yS, yST, yTa);
}

QVector<double> Window2::Extension(QVector<double> Vec, int n)
{
    QVector<double> buf;
    for(int i=0; i<Vec.length(); ++i)
    {
        buf.push_back(Vec[i]+n);
    }
    //qDebug() << buf;
    return buf;
}

void Window2::FullCount()
{
    xFull.clear();
    yFull.clear();

    for(int i = 0; i < Cycles; ++i)
    {
        if(i%2==0)
            yFull+=yRes;
        else
            yFull+=yResAlt;

        xFull+=Extension(xP, i);
    }
    if(NoiseDiap > 0)
    {
        yFull = VecSum(yFull, Noise);
    }
}

void Window2::MakeSomeNoise()
{
    Noise.clear();
    double buf;
    for(int i=0; i<yFull.length(); ++i)
    {
        buf = -NoiseDiap/2 + rand()%NoiseDiap;
        Noise.push_back(buf/100);
    }
}


//-----------------------------------------------------------------------------------

void Window2::on_Cycles_valueChanged(int arg1)
{
    Cycles = ui->Cycles->value();

    FullCount();
    if(NoiseDiap>0)
        MakeSomeNoise();
    FullCount();
    Build();
}

void Window2::on_Alternation_valueChanged(int value)
{
    //qDebug() << ui->Alternation->value();
    AltVal = ui->Alternation->value();
    AltDeform();
    ResAltCount();
    FullCount();
    Build();
}

void Window2::on_Noise_valueChanged(int value)
{
    NoiseDiap = ui->Noise->value();
    if(NoiseDiap>0)
        MakeSomeNoise();
    FullCount();
    Build();
}

//-------------------------------------------------------

void Window2::on_pushButton_released()
{
    Filtration *f = new Filtration(xFull, yFull, Cycles);

    f->show();
}
