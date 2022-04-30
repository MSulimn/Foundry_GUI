#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "QDebug"
#include "QVector3D"


int back;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui -> centralwidget -> setStyleSheet("QWidget { background-color: grey; }");
    styleWindow();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::styleWindow(){

// Initial config
      ui->stackedWidget->setCurrentIndex(0);
      ui ->top_back_btn->setVisible(false);
      ui ->top_home_btn->setVisible(false);


//Layouts
    ui->horizontalLayout_8->setAlignment(Qt::AlignVCenter);

// Costumize buttons

    QSizePolicy size_retain = ui->top_home_btn->sizePolicy();
    size_retain.setRetainSizeWhenHidden(true);

// NAV bar (Top layout)
    ui->bluetooth_btn->setIcon(QIcon(":/images/bluetooth_enabled_56px.png"));
    ui ->bluetooth_btn->setIconSize(QSize(65, 65));
    ui ->bluetooth_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->top_info_btn->setIcon(QIcon(":/images/info_56px.png"));
    ui ->top_info_btn->setIconSize(QSize(65, 65));
    ui ->top_info_btn->setStyleSheet("QPushButton{ border:transparent;}");
    ui ->top_info_btn->setSizePolicy(size_retain);

    ui ->top_settings_btn->setIcon(QIcon(":/images/settings_248px.png"));
    ui ->top_settings_btn->setIconSize(QSize(65, 65));
    ui ->top_settings_btn->setStyleSheet("QPushButton{ border:transparent;}");
    ui ->top_settings_btn->setSizePolicy(size_retain);

    ui->Logo->setPixmap( QPixmap( ":/images/MetalMakerLogo.png" ) );
    ui->Logo->setScaledContents( true );
    ui->Logo->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );


    ui ->top_home_btn->setIcon(QIcon(":/images/Home.png"));
    ui ->top_home_btn->setIconSize(QSize(56, 56));
    ui ->top_home_btn->setStyleSheet("QPushButton{ border:transparent;}");
    ui -> top_home_btn->setSizePolicy(size_retain);

    ui ->top_back_btn->setIcon(QIcon(":/images/back_48px.png"));
    ui ->top_back_btn->setIconSize(QSize(48, 48));
    ui ->top_back_btn->setStyleSheet("QPushButton{ border:transparent;}");
    ui -> top_back_btn->setSizePolicy(size_retain);

// Middle layout
    // Page1
    ui ->menu3_middle_btn->setIcon(QIcon(":/images/process_248px.png"));
    ui ->menu3_middle_btn->setIconSize(QSize(230, 230));
    ui->menu3_middle_btn->setStyleSheet("QPushButton{ border:transparent;}");


    // Page2
    ui ->menu3_left_btn->setIcon(QIcon("://images/DATA.png"));
    ui ->menu3_left_btn->setIconSize(QSize(230, 230));
    ui->menu3_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->menu3_right_btn->setIcon(QIcon("://images/Custom_230px.png"));
    ui ->menu3_right_btn->setIconSize(QSize(230, 230));
    ui->menu3_right_btn->setStyleSheet("QPushButton{ border:transparent;}");

    //Page3
    ui->preview_logo->setPixmap( QPixmap(":/images/mm3d_preview_logo_296px.png" ) );
    ui->preview_logo->setScaledContents( true );
    ui->preview_logo->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui ->edit_btn->setIcon(QIcon("://images/edit_48px.png"));
    ui ->edit_btn->setIconSize(QSize(56, 56));
    ui->edit_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->clear_btn->setIcon(QIcon("://images/button_clear_64px.png"));
    ui ->clear_btn->setIconSize(QSize(64, 64));
    ui->clear_btn->setStyleSheet("QPushButton{ border:transparent;}");

    //Page4
    ui ->menu_settings_left_btn->setIcon(QIcon("://images/Settings_296px.png"));
    ui ->menu_settings_left_btn->setIconSize(QSize(200, 200));
    ui->menu_settings_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->menu_settings_right_btn->setIcon(QIcon("://images/consumables_248px.png"));
    ui ->menu_settings_right_btn->setIconSize(QSize(248, 248));
    ui->menu_settings_right_btn->setStyleSheet("QPushButton{ border:transparent;}");

    //Page5

    ui ->consumable_menu_left_btn->setIcon(QIcon("://images/hardware_248px.png"));
    ui ->consumable_menu_left_btn->setIconSize(QSize(248, 248));
    ui->consumable_menu_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->consumable_menu_middle_btn->setIcon(QIcon("://images/materials_248px.png"));
    ui ->consumable_menu_middle_btn->setIconSize(QSize(248, 248));
    ui->consumable_menu_middle_btn->setStyleSheet("QPushButton{ border:transparent;}");

    //Page6


    ui ->hardware_menu_left_btn->setIcon(QIcon("://images/crucible_248px.png"));
    ui ->hardware_menu_left_btn->setIconSize(QSize(248, 248));
    ui->hardware_menu_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->hardware_menu_middle_btn->setIcon(QIcon("://images/nozzle_248px.png"));
    ui ->hardware_menu_middle_btn->setIconSize(QSize(248, 248));
    ui->hardware_menu_middle_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->hardware_menu_right_btn->setIcon(QIcon("://images/die_casting_248px.png"));
    ui ->hardware_menu_right_btn->setIconSize(QSize(248, 248));
    ui->hardware_menu_right_btn->setStyleSheet("QPushButton{ border:transparent;}");

    //Page7

    ui ->material_menu_left_btn->setIcon(QIcon("://images/materials_casting_248px.png"));
    ui ->material_menu_left_btn->setIconSize(QSize(248, 248));
    ui->material_menu_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->material_menu_middle_btn->setIcon(QIcon("://images/materials_investment_248px.png"));
    ui ->material_menu_middle_btn->setIconSize(QSize(248, 248));
    ui->material_menu_middle_btn->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->material_menu_right_btn->setIcon(QIcon("://images/materials_sand_248px.png"));
    ui ->material_menu_right_btn->setIconSize(QSize(248, 248));
    ui->material_menu_right_btn->setStyleSheet("QPushButton{ border:transparent;}");





 //Bottom Layout
    ui ->bottom_icon_left->setIcon(QIcon(":/images/crucible_disconnected_56px.png"));
    ui ->bottom_icon_left->setIconSize(QSize(65, 65));
    ui ->bottom_icon_left->setStyleSheet("QPushButton{ border:transparent;}");

    ui ->bottom_icon_right->setIcon(QIcon(":/images/no_temperature_56px.png"));
    ui ->bottom_icon_right->setIconSize(QSize(65, 65));
    ui ->bottom_icon_right->setStyleSheet("QPushButton{ border:transparent;}");



    ui -> top_info_btn->setCheckable(true);



}

void MainWindow::on_top_info_btn_toggled(bool checked)
{
    if(checked){
        ui -> centralwidget -> setStyleSheet("QWidget { background-color: red; }");
    }
    else
        ui -> centralwidget -> setStyleSheet("QWidget { background-color: grey; }");
}


void MainWindow::on_menu3_middle_btn_clicked(){
    ui->stackedWidget->setCurrentIndex(1);
    ui ->top_back_btn->setVisible(true);
    ui ->top_home_btn->setVisible(true);


}



void MainWindow::on_top_back_btn_clicked()
{
    int c_page = ui->stackedWidget->currentIndex();

    if(c_page-1 == 2 || c_page-1 == 1){

        ui->top_info_btn->setVisible(true);
        ui->top_settings_btn->setVisible(true);
        ui->stackedWidget->setCurrentIndex(c_page-1);

    }
    else if(c_page == 3){

        ui->stackedWidget->setCurrentIndex(back);
    }
    else  ui->stackedWidget->setCurrentIndex(c_page-1);



}


void MainWindow::on_menu3_left_btn_clicked()
{
    ui->top_info_btn->hide();
    ui->top_settings_btn->hide();

    ui->stackedWidget->setCurrentIndex(2);



}



void MainWindow::on_top_settings_btn_pressed()
{
     back = ui->stackedWidget->currentIndex();
     ui->stackedWidget->setCurrentIndex(3);
     ui->top_back_btn->show();
     ui->top_home_btn->show();


}


void MainWindow::on_menu_settings_right_btn_pressed()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_consumable_menu_left_btn_clicked()
{
    ui-> stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_consumable_menu_middle_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}



