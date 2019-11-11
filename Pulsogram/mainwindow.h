#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <math.h>
#include <QString>
#include <window2.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_Prb_clicked();

    void on_Qrb_clicked();

    void on_Rrb_clicked();

    void on_Srb_clicked();

    void on_STrb_clicked();

    void on_Trb_clicked();



    void on_Amplitude_sliderMoved(int position);

    void on_Time_sliderMoved(int position);

    void on_Width1_sliderMoved(int position);

    void on_Width2_sliderMoved(int position);

    void on_pushButton_released();

private:
    double b = 0, e = 1; //Begin, End
    int bpm = 60; //Beats Per Minute
    double h = 0.001; // Шаг дискретизации

    QVector<double> xRes, yRes;

    QVector<double> xP, yP;     double pAmpVal=14,  pTimeVal=303,  pWidthVal=37;
    QVector<double> xQ, yQ;     double qAmpVal=-10,  qTimeVal=465,  qWidthVal=10;
    QVector<double> xR, yR;     double rAmpVal=98,  rTimeVal=500,  rWidthVal=8;
    QVector<double> xS, yS;     double sAmpVal=-17,  sTimeVal=530,  sWidthVal=14;
    QVector<double> xST, yST;   double stAmpVal=0, stTimeVal=0, stWidthVal=0;
    QVector<double> xT, yT;     double tAmpVal=20,  tTimeVal=697,  tWidth1Val=35, tWidth2Val=35;
    
    QString selectedRB; //Хранит информацию о выбранном зубце
    void Recount();
    void Rebuild(); //Перестраивает график. Стоит вызвать после изменения данных

    QVector<double> VecSum(QVector<double> x1, QVector<double> x2);

    //Сумма вукторов всех зубцов
    QVector<double> VecRes(QVector<double> yP, QVector<double> yQ, QVector<double> yR, QVector<double> yS, QVector<double> yST, QVector<double> yT);

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
