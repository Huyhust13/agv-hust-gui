#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // === Additional UI Setup =====
    ui->lbl_chooseGoal->hide();
    ui->tbl_thongTin->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_btn_pressed()
{
    qDebug() << "START button pressed!";
    ui->start_btn->setText("NEXT");
}

void MainWindow::on_stop_btn_pressed()
{
    qDebug() << "STOP button pressed!";
    ui->start_btn->setText("START");
}

void MainWindow::on_goal1_btn_pressed()
{
    qDebug() << "goto Goal 1 button pressed!";
}

void MainWindow::on_goal2_btn_pressed()
{
    qDebug() << "goto Goal 2 button pressed!";
}


void MainWindow::on_goal3_btn_pressed()
{
    qDebug() << "goto Goal 3 button pressed!";
}

void MainWindow::on_goal4_btn_pressed()
{
    qDebug() << "goto Goal 4 button pressed!";
}

void MainWindow::on_brower_btn_pressed()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Open Route",
                                                    QDir::homePath(),
                                                    "Config (*.yaml)");
    if (QFile::exists(fileName)) {
        ui->lineEdit->setText(fileName);
    }
}
