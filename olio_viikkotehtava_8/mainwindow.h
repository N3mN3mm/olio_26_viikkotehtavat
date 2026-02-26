#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString, short);

public slots:
    void timeout();

private slots:
    void time1Clicked();
    void time2Clicked();
    void startClicked();
    void stopClicked();
    void switch1Clicked();
    void switch2Clicked();

};
#endif // MAINWINDOW_H
