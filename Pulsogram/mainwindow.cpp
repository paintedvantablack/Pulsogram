#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->BPM->setMaximum(220);
    ui->BPM->setWrapping(true);
    ui->BPM->setValue(bpm);

    ui->Graph->xAxis->setLabel("с");
    ui->Graph->yAxis->setLabel("мВ");

    ui->Amplitude->setRange(-100,100);
    ui->Time->setRange(0,1000);
    ui->Width1->setRange(0,100);
    ui->Width2->setRange(0,100);

    ui->Prb->setChecked(1);
    ui->Width2->setEnabled(0);
    selectedRB = "p";
    ui->Amplitude->setValue(pAmpVal);
    ui->Time->setValue(pTimeVal);
    ui->Width1->setValue(pWidthVal);

    Recount();
    Rebuild();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Prb_clicked()
{
    ui->Width2->setEnabled(0);
    selectedRB = "p";
    ui->Amplitude->setValue(pAmpVal);
    ui->Time->setValue(pTimeVal);
    ui->Width1->setValue(pWidthVal);

}

void MainWindow::on_Qrb_clicked()
{
    ui->Width2->setEnabled(0);
    selectedRB = "q";
    ui->Amplitude->setValue(qAmpVal);
    ui->Time->setValue(qTimeVal);
    ui->Width1->setValue(qWidthVal);
}

void MainWindow::on_Rrb_clicked()
{
    ui->Width2->setEnabled(0);
    selectedRB = "r";
    ui->Amplitude->setValue(rAmpVal);
    ui->Time->setValue(rTimeVal);
    ui->Width1->setValue(rWidthVal);
}

void MainWindow::on_Srb_clicked()
{
    ui->Width2->setEnabled(0);
    selectedRB = "s";
    ui->Amplitude->setValue(sAmpVal);
    ui->Time->setValue(sTimeVal);
    ui->Width1->setValue(sWidthVal);
}

void MainWindow::on_STrb_clicked()
{
    ui->Width2->setEnabled(0);
    selectedRB = "st";
    ui->Amplitude->setValue(stAmpVal);
    ui->Time->setValue(stTimeVal);
    ui->Width1->setValue(stWidthVal);

}

void MainWindow::on_Trb_clicked()
{
    ui->Width2->setEnabled(1);
    selectedRB = "t";
    ui->Amplitude->setValue(tAmpVal);
    ui->Time->setValue(tTimeVal);
    ui->Width1->setValue(tWidth1Val);
    ui->Width2->setValue(tWidth2Val);
}


//-----------------------------------------------------------------------------------------------------------

void MainWindow::Recount()
{
    xP.clear();
    yP.clear();

    xQ.clear();
    yQ.clear();

    xR.clear();
    yR.clear();

    xS.clear();
    yS.clear();

    xST.clear();
    yST.clear();

    xT.clear();
    yT.clear();




    xRes.clear();
    yRes.clear();

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xP.push_back(X); //Это t в формуле
        double u = pTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b = pWidthVal/1000;//b в формуле, ширина
        double A = pAmpVal/100;//A в формуле, амплитуда.
        yP.push_back(A*exp(-pow(X-u,2)/(2*pow(b,2))));//Формула нашей функции
    }

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xQ.push_back(X); //Это t в формуле
        double u = qTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b = qWidthVal/1000;//b в формуле, ширина
        double A = qAmpVal/100;//A в формуле, амплитуда.
        yQ.push_back(A*exp(-pow(X-u,2)/(2*pow(b,2))));//Формула нашей функции
    }

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xR.push_back(X); //Это t в формуле
        double u = rTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b = rWidthVal/1000;//b в формуле, ширина
        double A = rAmpVal/100;//A в формуле, амплитуда.
        yR.push_back(A*exp(-pow(X-u,2)/(2*pow(b,2))));//Формула нашей функции
    }

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xS.push_back(X); //Это t в формуле
        double u = sTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b = sWidthVal/1000;//b в формуле, ширина
        double A = sAmpVal/100;//A в формуле, амплитуда.
        yS.push_back(A*exp(-pow(X-u,2)/(2*pow(b,2))));//Формула нашей функции
    }

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xST.push_back(X); //Это t в формуле
        double u = stTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b = stWidthVal/1000;//b в формуле, ширина
        double A = stAmpVal/100;//A в формуле, амплитуда.
        yST.push_back(A*exp(-pow(X-u,2)/(2*pow(b,2))));//Формула нашей функции
    }

    for (double X=b; X<=e; X+=h)//Пробегаем по всем точкам
    {
        xT.push_back(X); //Это t в формуле
        double u = tTimeVal/1000;//Мю в формуле, смещение по горизонтали
        double b1 = tWidth1Val/1000;//b в формуле, ширина
        double b2 = tWidth2Val/1000;//b в формуле, ширина
        double A = tAmpVal/100;//A в формуле, амплитуда.
        if(X<u)
            yT.push_back(A*exp(-pow(X-u,2)/(2*pow(b1,2))));//Формула нашей функции
        else
            yT.push_back(A*exp(-pow(X-u,2)/(2*pow(b2,2))));//Формула нашей функции
    }

    xRes = xP;
    yRes=VecRes(yP, yQ, yR, yS, yST, yT);
}

void MainWindow::Rebuild()
{
    ui->Graph->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->Graph->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->Graph->graph(0)->setData(xRes, yRes);

    //Устанавливаем цвет линии
    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(24, 180, 50));
    ui->Graph->graph(0)->setPen(pen);

    //Установим область, которая будет показываться на графике
    ui->Graph->xAxis->setRange(b, e);//Для оси Ox

    ui->Graph->yAxis->setRange(-1.1, 1.1);

    //И перерисуем график на нашем widget
    ui->Graph->replot();
}

//-----------------------------------------------------------------------------------------------------------





QVector<double> MainWindow::VecSum(QVector<double> x1, QVector<double> x2)
{
    QVector<double> xRes;
    for(int i=0; i<x1.size(); ++i)
    {
        xRes.push_back(x1[i]+x2[i]);
    }
    return xRes;
}

QVector<double> MainWindow::VecRes(QVector<double> yP, QVector<double> yQ, QVector<double> yR, QVector<double> yS, QVector<double> yST, QVector<double> yT)
{
    return(VecSum(yP,VecSum(yQ,VecSum(yR,VecSum(yS,VecSum(yST,yT))))));
}

//--------------------------------------------------------------------------------------------------


void MainWindow::on_Amplitude_sliderMoved(int position)
{
    if(selectedRB == "p")
        pAmpVal = ui->Amplitude->value();
    if(selectedRB == "q")
        qAmpVal = ui->Amplitude->value();
    if(selectedRB == "r")
        rAmpVal = ui->Amplitude->value();
    if(selectedRB == "s")
        sAmpVal = ui->Amplitude->value();
    if(selectedRB == "st")
        stAmpVal = ui->Amplitude->value();
    if(selectedRB == "t")
        tAmpVal = ui->Amplitude->value();

    Recount();
    Rebuild();
}

void MainWindow::on_Time_sliderMoved(int position)
{
    if(selectedRB == "p")
        pTimeVal = ui->Time->value();
    if(selectedRB == "q")
        qTimeVal = ui->Time->value();
    if(selectedRB == "r")
        rTimeVal = ui->Time->value();
    if(selectedRB == "s")
        sTimeVal = ui->Time->value();
    if(selectedRB == "st")
        stTimeVal = ui->Time->value();
    if(selectedRB == "t")
        tTimeVal = ui->Time->value();

    Recount();
    Rebuild();
}

void MainWindow::on_Width1_sliderMoved(int position)
{
    if(selectedRB == "p")
        pWidthVal = ui->Width1->value();
    if(selectedRB == "q")
        qWidthVal = ui->Width1->value();
    if(selectedRB == "r")
        rWidthVal = ui->Width1->value();
    if(selectedRB == "s")
        sWidthVal = ui->Width1->value();
    if(selectedRB == "st")
        stWidthVal = ui->Width1->value();
    if(selectedRB == "t")
        tWidth1Val = ui->Width1->value();

    Recount();
    Rebuild();
}

void MainWindow::on_Width2_sliderMoved(int position)
{
    if(selectedRB == "t")
        tWidth2Val = ui->Width2->value();

    Recount();
    Rebuild();
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

void MainWindow::on_pushButton_released()
{
    QVector<double> xP_, yP_;
    QVector<double> xQ_, yQ_;
    QVector<double> xR_, yR_;
    QVector<double> xS_, yS_;
    QVector<double> xST_, yST_;
    QVector<double> xT_, yT_;

    for(int i=0; i<xP.length(); ++i)
    {
        if(i%5==0)
        {
            xP_.push_back(xP[i]); yP_.push_back(yP[i]);
            xQ_.push_back(xQ[i]); yQ_.push_back(yQ[i]);
            xR_.push_back(xR[i]); yR_.push_back(yR[i]);
            xS_.push_back(xS[i]); yS_.push_back(yS[i]);
            xST_.push_back(xST[i]); yST_.push_back(yST[i]);
            xT_.push_back(xT[i]); yT_.push_back(yT[i]);
        }
        else
            continue;
    }

    xP_[0]= 0; yP_[0]= 0; xQ_[0]= 0; yQ_[0]= 0; xR_[0]= 0; yR_[0]= 0; xS_[0]= 0; yS_[0]= 0; xST_[0]= 0; yST_[0]= 0; xT_[0]= 0; yT_[0] = 0;

    Window2 *w2 = new Window2(xP_, yP_, xQ_, yQ_, xR_, yR_, xS_, yS_, xST_, yST_, xT_, yT_);

    w2->show();
}
