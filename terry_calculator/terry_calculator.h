#ifndef TERRY_CALCULATOR_H
#define TERRY_CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class terry_calculator;
}
QT_END_NAMESPACE

class terry_calculator : public QMainWindow
{
    Q_OBJECT

public:
    terry_calculator(QWidget *parent = 0);
    ~terry_calculator();

private:
    Ui::terry_calculator *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButton();
//   void ChangeNumberSign();
};
#endif // TERRY_CALCULATOR_H