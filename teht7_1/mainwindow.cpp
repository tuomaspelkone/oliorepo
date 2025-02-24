#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QLineEdit"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked()
{
    QString str = ui->numberDisplay->text();
    int num = str.toInt();
    qDebug() << "Number = " << num;
    num++;
    qDebug() << "Increased number = " << num;
    QString newStr = QString::number(num);
    ui->numberDisplay->setText(newStr);
}


void MainWindow::on_ResetButton_clicked()
{
    ui->numberDisplay->setText("0");
    qDebug() << "Number set to 0";
}

