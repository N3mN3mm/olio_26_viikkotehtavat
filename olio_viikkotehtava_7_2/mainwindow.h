#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void numClicked();
    void operatorClicked();
    void enter();
    void clear();

private:
    Ui::MainWindow *ui;
    QString firstNumber;
    QString secondNumber;
    QString currentOperator;
    bool enteringSecondNumber = false;
};
#endif // MAINWINDOW_H
