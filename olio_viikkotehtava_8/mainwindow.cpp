#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer();
    connect(pQTimer, &QTimer::timeout,
            this, &MainWindow::timeout);

    connect(ui->start, &QPushButton::clicked, this, &MainWindow::startClicked);
    connect(ui->stop, &QPushButton::clicked, this, &MainWindow::stopClicked);
    connect(ui->switch1, &QPushButton::clicked, this, &MainWindow::switch1Clicked);
    connect(ui->switch2, &QPushButton::clicked, this, &MainWindow::switch2Clicked);
    connect(ui->btn120, &QPushButton::clicked, this, &MainWindow::time1Clicked);
    connect(ui->btn300, &QPushButton::clicked, this, &MainWindow::time2Clicked);

    player1Time = 0;
    player2Time = 0;
    gameTime = 0;
    currentPlayer = 0;

    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);

    updateProgressBar();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::updateProgressBar()
{
    if(gameTime == 0)
        return;

    int p1Percent = (player1Time * 100) / gameTime;
    int p2Percent = (player2Time * 100) / gameTime;

    ui->progressBar1->setValue(p1Percent);
    ui->progressBar2->setValue(p2Percent);
}

void MainWindow::setGameInfoText(QString text, short size)
{
    ui->label->setText(text);

    QFont font = ui->label->font();
    font.setPointSize(size);
    ui->label->setFont(font);
}

void MainWindow::timeout()
{
    if(currentPlayer == 1)
    {
        player1Time--;

        if(player1Time <= 0)
        {
            pQTimer->stop();
            setGameInfoText("Player 2 WON!!", 18);
        }
    }
    else if(currentPlayer == 2)
    {
        player2Time--;

        if(player2Time <= 0)
        {
            pQTimer->stop();
            setGameInfoText("Player 1 WON!!", 18);
        }
    }

    updateProgressBar();
}

void MainWindow::time1Clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBar();
    setGameInfoText("Ready to play (120 sec)", 14);
}

void MainWindow::time2Clicked()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBar();
    setGameInfoText("Ready to play (5 min)", 14);
}

void MainWindow::startClicked()
{
    if(gameTime == 0)
        return;

    currentPlayer = 1;
    pQTimer->start(1000);

    setGameInfoText("Game ongoing", 14);
}

void MainWindow::stopClicked()
{
    pQTimer->stop();
    setGameInfoText("Game stopped", 14);
}

void MainWindow::switch1Clicked()
{
    if(currentPlayer == 1)
        currentPlayer = 2;
}

void MainWindow::switch2Clicked()
{
    if(currentPlayer == 2)
        currentPlayer = 1;
}
