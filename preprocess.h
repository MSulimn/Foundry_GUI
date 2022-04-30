#ifndef PREPROCESS_H
#define PREPROCESS_H

#include <QDialog>

namespace Ui {
class preprocess;
}

class preprocess : public QDialog
{
    Q_OBJECT

public:
    explicit preprocess(QWidget *parent = nullptr);
    ~preprocess();

private:
    Ui::preprocess *ui;
private slots:
    void styleSheet();
    void on_menu3_left_btn_clicked();
    void on_menu3_right_btn_clicked();
    void on_top_back_btn_clicked();
    void on_pushButton_clicked();
    void on_chooseMaterial_menu_left_btn_clicked();
};

#endif // PREPROCESS_H
