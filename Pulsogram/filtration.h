#ifndef FILTRATION_H
#define FILTRATION_H

#include <QMainWindow>
#include <list>
#include <iostream>

namespace Ui {
class Filtration;
}

class Filtration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Filtration(QVector<double> &x, QVector<double> &y, int c, QWidget *parent = nullptr);
    ~Filtration();

private slots:
    void on_rbExp_toggled(bool checked);

    void on_rbWidth_toggled(bool checked);

    void on_AlphaSlider_valueChanged(int value);

    void on_WidthSlider_valueChanged(int value);

private:
    Ui::Filtration *ui;
    void Build();

    double alpha = 0;
    double width = 0;

    QVector<double> xVals, yVals;

    QVector<double> xFAlpha, yFAlpha;
    QVector<double> xFWidth, yFWidth;
    QString SelectedRB;

    QVector<double> ExSmoothM(QVector<double> z);
    QVector<double> MiddMeth(QVector<double> z);

    int Cycles = 0;

};

#endif // FILTRATION_H
