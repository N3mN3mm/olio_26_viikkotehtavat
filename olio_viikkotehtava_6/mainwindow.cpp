#include "mainwindow.h"
#include "ui_mainwindow.h"

int counter = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Count, &QPushButton::clicked,
            this, &MainWindow::count);
    connect(ui->Reset, &QPushButton::clicked,
            this, &MainWindow::reset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::count()
{
    counter++;
    ui->label->setText(QString::number(counter));
}

void MainWindow::reset()
{
    counter = 0;
    ui->label->setText(QString::number(counter));
}
