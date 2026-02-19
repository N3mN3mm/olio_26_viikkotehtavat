#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->One, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Two, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Three, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Four, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Five, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Six, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Seven, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Eight, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Nine, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Zero, &QPushButton::clicked, this, &MainWindow::numClicked);
    connect(ui->Plus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->Minus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->Multiplier, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->Divider, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->Clear, &QPushButton::clicked, this, &MainWindow::clear);
    connect(ui->Enter, &QPushButton::clicked, this, &MainWindow::enter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender()); //Tarkistetaan mitä painettu, palautuu tyyppinä QObject, joten muutetaan se QPushButton

    if(!enteringSecondNumber)
    {
        firstNumber += button->text(); // hakee painetun napin tekstin
        ui->First->setText(firstNumber);
    }
    else
    {
        secondNumber += button->text();
        ui->Second->setText(secondNumber);
    }
}

void MainWindow::operatorClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    currentOperator = button->text();
    enteringSecondNumber = true; //vaihdetaan seuraavaan näyttöön toista numeroa varten
}

void MainWindow::enter()
{
    double num1 = firstNumber.toDouble();
    double num2 = secondNumber.toDouble();
    double result = 0;

    if(currentOperator == "+")
    {
        result = num1 + num2;
    }
    else if(currentOperator == "-")
    {
        result = num1- num2;
    }
    else if(currentOperator == "*")
    {
        result = num1 * num2;
    }
    else if(currentOperator == "/")
    {
        result = num1 / num2;
    }

    ui->Result->setText(QString::number(result));
}

void MainWindow::clear()
{
    firstNumber = "";
    secondNumber = "";
    currentOperator = "";
    enteringSecondNumber = false;

    ui->First->clear();
    ui->Second->clear();
    ui->Result->clear();
}
