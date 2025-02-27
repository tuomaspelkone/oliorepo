#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    if(timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_start_clicked()
{
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->progress1->setRange(0,gameTime);
    ui->progress2->setRange(0,gameTime);
    ui->progress1->setValue(gameTime);
    ui->progress2->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();

    ui->gameState->setText("Game ongoing");
}

void MainWindow::updateProgressBar()
{

    if (currentPlayer == 1) {
        p1Time--;
        ui->progress1->setValue(p1Time);
        if (p1Time == 0) {
            ui->gameState->setText("Player 2 won!");
            if(timer) {
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }
    } else if (currentPlayer == 2) {
        p2Time--;
        ui->progress2->setValue(p2Time);
        if (p2Time == 0) {
            ui->gameState->setText("Player 1 won!");
            if(timer) {
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }
    }
}



void MainWindow::on_switch1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_switch2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_stop_clicked()
{
    ui->progress1->setValue(0);
    ui->progress2->setValue(0);
    ui->gameState->setText("New game via start button");
    if(timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
}


void MainWindow::on_shortGame_clicked()
{
    gameTime = 120;
    ui->gameState->setText("Ready to play");
}


void MainWindow::on_longGame_clicked()
{
    gameTime = 300;
}




