#include "terry_calculator.h"
#include "ui_terry_calculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool memAddTrigger = false;
bool memGetTrigger = false;
bool memClearTrigger = false;

// Define the static QRegularExpression
QRegularExpression terry_calculator::re("[-]?[0-9.*]");

terry_calculator::terry_calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::terry_calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = terry_calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
// Equals Button Signal
    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualsButtonPressed()));
// ChangeNumSign Signal
    connect(ui->ChangeNumberSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));
// Clear Button Signal
    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(Clear()));
// Memory Button Signal
    connect(ui->MemAdd, SIGNAL(released()), this,
            SLOT(MemoryButtonPressed()));
    connect(ui->MemGet, SIGNAL(released()), this,
            SLOT(MemoryButtonPressed()));
    connect(ui->MemClear, SIGNAL(released()), this,
            SLOT(MemoryButtonPressed()));
}


terry_calculator::~terry_calculator()
{
    delete ui;
}

void terry_calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void terry_calculator::MathButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if((QString::compare(butVal, "*", Qt::CaseInsensitive) == 0)){
        multTrigger = true;
    } else if((QString::compare(butVal, "+", Qt::CaseInsensitive) == 0)){
        addTrigger = true;
    } else {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void terry_calculator::EqualsButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void terry_calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
   if(re.match(displayVal).hasMatch()){
       double dblDisplayVal = displayVal.toDouble();
       double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
 }

}

void terry_calculator::MemoryButtonPressed(){
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (memAddTrigger || memGetTrigger || memClearTrigger){
        if(memAddTrigger){
            if(QString::compare(butVal, "M+", Qt::CaseInsensitive) == 0){
                memAddTrigger = true;
                dblDisplayVal = displayVal.toDouble();
            } else if(memGetTrigger){
            if(QString::compare(butVal, "M", Qt::CaseInsensitive) == 0){
                memGetTrigger = true;
                ui->Display->setText(QString::number(dblDisplayVal));
            } else if(memClearTrigger){
            if(QString::compare(butVal, "M-", Qt::CaseInsensitive) == 0){
                memClearTrigger = true;
                    ui->Display->setText("");
                    }

                }
            }
        }
    }
    ui->Display->setText(QString::number(dblDisplayVal));
}

void terry_calculator::Clear(){
    ui->Display->setText("");
}

