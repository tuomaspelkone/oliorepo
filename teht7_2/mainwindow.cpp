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
    delete ui;
}

void MainWindow::on_buttonSum_clicked()
{
    if (state == 3) {
        QString str1 = ui->display1->text();
        int num1 = str1.toInt();

        QString str2 = ui->display2->text();
        int num2 = str2.toInt();

        int result = num1 + num2;
        qDebug() << "Sum:" << num1 << "+" << num2 << "=" << result;

        QString resStr = QString::number(result);
        ui->displayResult->setText(resStr);

        state = 1;
        qDebug() << "Palattiin tilaan 1";
    }
}


void MainWindow::on_button1_clicked()
{
    QString str = ui->button1->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button2_clicked()
{
    QString str = ui->button2->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button3_clicked()
{
    QString str = ui->button3->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button4_clicked()
{
    QString str = ui->button4->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button5_clicked()
{
    QString str = ui->button5->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button6_clicked()
{
    QString str = ui->button6->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button7_clicked()
{
    QString str = ui->button7->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button8_clicked()
{
    QString str = ui->button8->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button9_clicked()
{
    QString str = ui->button9->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}


void MainWindow::on_button0_clicked()
{
    QString str = ui->button0->text();
    int n = str.toInt();
    qDebug() << "Chose number " << n;
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    QString str = QString::number(n);

    if (state == 1) {
        ui->display1->setText(str);
    } else if (state == 2) {
        ui->display2->setText(str);
    }
}


void MainWindow::on_buttonEnter_clicked()
{
    state++;
    qDebug() << "State: " << state;
    /*
    if (state == 3) {
        state = 1;
    }
    */
}


void MainWindow::on_buttonDifference_clicked()
{
    if (state == 3) {
        QString str1 = ui->display1->text();
        int num1 = str1.toInt();

        QString str2 = ui->display2->text();
        int num2 = str2.toInt();

        int result = num1 - num2;
        qDebug() << "Division:" << num1 << "-" << num2 << "=" << result;

        QString resStr = QString::number(result);
        ui->displayResult->setText(resStr);

        state = 1;
        qDebug() << "Palattiin tilaan 1";
    }
}


void MainWindow::on_buttonMultiply_clicked()
{
    if (state == 3) {
        QString str1 = ui->display1->text();
        int num1 = str1.toInt();

        QString str2 = ui->display2->text();
        int num2 = str2.toInt();

        int result = num1 * num2;
        qDebug() << "Multiple:" << num1 << "*" << num2 << "=" << result;

        QString resStr = QString::number(result);
        ui->displayResult->setText(resStr);

        state = 1;
        qDebug() << "Palattiin tilaan 1";
    }
}


void MainWindow::on_buttonDivide_clicked()
{
    if (state == 3) {
        QString str1 = ui->display1->text();
        int num1 = str1.toInt();

        QString str2 = ui->display2->text();
        int num2 = str2.toInt();

        int result = num1 / num2;
        qDebug() << "Division:" << num1 << "/" << num2 << "=" << result;

        QString resStr = QString::number(result);
        ui->displayResult->setText(resStr);

        state = 1;
        qDebug() << "Palattiin tilaan 1";
    }
}


void MainWindow::on_buttonClear_clicked()
{
    ui->display1->setText("0");
    ui->display2->setText("0");
    ui->displayResult->setText("0");
    state = 1;
}

