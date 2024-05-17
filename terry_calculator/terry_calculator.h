#ifndef TERRY_CALCULATOR_H
#define TERRY_CALCULATOR_H

#include <QMainWindow>
#include <QRegularExpression>

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
    static QRegularExpression re;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
};
#endif // TERRY_CALCULATOR_H
