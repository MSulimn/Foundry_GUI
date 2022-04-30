#include "preprocess.h"
#include "ui_preprocess.h"

preprocess::preprocess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preprocess)
{
    ui->setupUi(this);
    ui -> CentralWidget -> setStyleSheet("QWidget { background-color: grey; }");
    styleSheet();
}

preprocess::~preprocess()
{
    delete ui;
}


void preprocess::styleSheet(){

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

  //middle layout

  // Page1
  ui ->menu3_left_btn->setIcon(QIcon("://images/DATA.png"));
  ui ->menu3_left_btn->setIconSize(QSize(230, 230));
  ui->menu3_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

  ui ->menu3_right_btn->setIcon(QIcon("://images/Custom_230px.png"));
  ui ->menu3_right_btn->setIconSize(QSize(230, 230));
  ui->menu3_right_btn->setStyleSheet("QPushButton{ border:transparent;}");

  //Page2
  ui->preview_logo->setPixmap( QPixmap(":/images/mm3d_preview_logo_296px.png" ) );
  ui->preview_logo->setScaledContents( true );
  ui->preview_logo->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

  ui ->edit_btn->setIcon(QIcon("://images/edit_48px.png"));
  ui ->edit_btn->setIconSize(QSize(56, 56));
  ui->edit_btn->setStyleSheet("QPushButton{ border:transparent;}");

  ui ->clear_btn->setIcon(QIcon("://images/button_clear_64px.png"));
  ui ->clear_btn->setIconSize(QSize(64, 64));
  ui->clear_btn->setStyleSheet("QPushButton{ border:transparent;}");

  //Page 3
  ui->custom_menu_left_img->setPixmap( QPixmap("://images/Custom_190px.png" ) );
  ui->custom_menu_left_img->setScaledContents( true );
  ui->custom_menu_left_img->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

  ui ->custom_menu_add_btn->setIcon(QIcon("://images/button_clear_64px.png"));
  ui ->custom_menu_add_btn->setIconSize(QSize(64, 64));
  ui->custom_menu_add_btn->setStyleSheet("QPushButton{ border:transparent;}");
  //Page 4

  ui ->chooseMaterial_menu_left_btn->setIcon(QIcon("://images/AL.png"));
  ui ->chooseMaterial_menu_left_btn->setIconSize(QSize(248, 248));
  ui->chooseMaterial_menu_left_btn->setStyleSheet("QPushButton{ border:transparent;}");

  ui ->chooseMaterial_menu_right_btn->setIcon(QIcon("://images/ZA.png"));
  ui ->chooseMaterial_menu_right_btn->setIconSize(QSize(248, 248));
  ui->chooseMaterial_menu_right_btn->setStyleSheet("QPushButton{ border:transparent;}");

  //Material addition menu

  ui->material_addition_left_img->setPixmap( QPixmap("://images/AL.png" ) );
  ui->material_addition_left_img->setScaledContents( true );
  ui->material_addition_left_img->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

  ui ->material_addition_continue_btn->setIcon(QIcon("://images/Continue.png"));
  ui ->material_addition_continue_btn->setIconSize(QSize(200, 200));
  ui->material_addition_continue_btn->setStyleSheet("QPushButton{ border:transparent;}");

  ui->material_addition_middle_down_label->setText("DEPENDS ON THE CHOSEN PROFILE");


  //Bottom Layout
     ui ->bottom_icon_left->setIcon(QIcon(":/images/crucible_disconnected_56px.png"));
     ui ->bottom_icon_left->setIconSize(QSize(65, 65));
     ui ->bottom_icon_left->setStyleSheet("QPushButton{ border:transparent;}");

     ui ->bottom_icon_right->setIcon(QIcon(":/images/no_temperature_56px.png"));
     ui ->bottom_icon_right->setIconSize(QSize(65, 65));
     ui ->bottom_icon_right->setStyleSheet("QPushButton{ border:transparent;}");


}

void preprocess::on_menu3_left_btn_clicked()
{
    ui ->top_back_btn->setVisible(true);
    ui ->top_home_btn->setVisible(true);

    ui->stackedWidget->setCurrentIndex(1);
}


void preprocess::on_menu3_right_btn_clicked()
{
    ui ->top_back_btn->setVisible(true);
    ui ->top_home_btn->setVisible(true);

    ui->stackedWidget->setCurrentIndex(2);
}


void preprocess::on_top_back_btn_clicked()
{
    int c_page = ui->stackedWidget->currentIndex();


        ui->stackedWidget->setCurrentIndex(c_page-1);
}


void preprocess::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void preprocess::on_chooseMaterial_menu_left_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

