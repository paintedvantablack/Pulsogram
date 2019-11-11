#ifndef WINDOW2_H
#define WINDOW2_H

#include <QMainWindow>
#include <QDebug>
#include <ctime>
#include <filtration.h>

namespace Ui {
class Window2;
}

class Window2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window2(QVector<double> xP_, QVector<double> yP_, QVector<double> xQ_, QVector<double> yQ_, QVector<double> xR_, QVector<double> yR_, QVector<double> xS_, QVector<double> yS_, QVector<double> xST_, QVector<double> yST_, QVector<double> xT_, QVector<double> yT_, QWidget *parent = nullptr);
    ~Window2();

private slots:
    void on_Alternation_valueChanged(int value);

    //void on_Noise_sliderMoved(int position);

    void on_Cycles_valueChanged(int arg1);

    void on_Noise_valueChanged(int value);

    void on_pushButton_released();

private:
    QVector<double> xP, yP;
    QVector<double> xQ, yQ;
    QVector<double> xR, yR;
    QVector<double> xS, yS;
    QVector<double> xST, yST;
    QVector<double> xT, yT;
    QVector<double> xTa, yTa;

    QVector<double> xRes, yRes;//
    QVector<double> xResAlt, yResAlt;

    QVector<double> xFull, yFull;

    QVector<double> Noise;

    double AltVal;//Уровень Альтернации
    int Cycles = 10;
    int NoiseDiap=0;

    //void SettingRanges();
    void AltDeform();//Генерирует альтернацию для зубца T



    QVector<double> VecSum(QVector<double> x1, QVector<double> x2);
    QVector<double> VecRes(QVector<double> yP, QVector<double> yQ, QVector<double> yR, QVector<double> yS, QVector<double> yST, QVector<double> yT);
    void ResCount();
    void ResAltCount();
    QVector<double> Extension(QVector<double> Vec, int n); //Для продления по оси X
    void FullCount();

    void MakeSomeNoise();

    void Build();











    Ui::Window2 *ui;
};

#endif // WINDOW2_H
