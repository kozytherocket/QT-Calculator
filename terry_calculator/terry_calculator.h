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
    double memoryValue = 0.0;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualsButtonPressed();
    void ChangeNumberSign();
    void Clear();
    void MemoryButtonPressed();
};
#endif // TERRY_CALCULATOR_H
