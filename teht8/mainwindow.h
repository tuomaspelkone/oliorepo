#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void on_start_clicked();
    void updateProgressBar();

    void on_switch1_clicked();

    void on_switch2_clicked();

    void on_stop_clicked();

    void on_shortGame_clicked();

    void on_longGame_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;


};
#endif // MAINWINDOW_H
