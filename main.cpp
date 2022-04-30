#include "mainwindow.h"
#include "preprocess.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    preprocess p;
    p.show();
    return a.exec();
}
