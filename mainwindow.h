#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

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
     void styleWindow();

     void on_top_info_btn_toggled(bool checked);

     void on_menu3_middle_btn_clicked();

     void on_top_back_btn_clicked();

     void on_menu3_left_btn_clicked();


     void on_top_settings_btn_pressed();

     void on_menu_settings_right_btn_pressed();

     void on_consumable_menu_left_btn_clicked();

     void on_consumable_menu_middle_btn_clicked();

private:
    Ui::MainWindow *ui;
    QMainWindow Mainmenu;
    QPushButton menu3_middle_btn;

};
#endif // MAINWINDOW_H
