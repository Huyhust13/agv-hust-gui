#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_btn_pressed();

    void on_stop_btn_pressed();

    void on_goal1_btn_pressed();

    void on_goal2_btn_pressed();

    void on_goal3_btn_pressed();

    void on_goal4_btn_pressed();

    void on_brower_btn_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
