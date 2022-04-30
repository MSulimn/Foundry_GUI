#include "casting.h"
#include "ui_casting.h"

casting::casting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::casting)
{
    ui->setupUi(this);

}

casting::~casting()
{
    delete ui;
}
