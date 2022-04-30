#ifndef CASTING_H
#define CASTING_H

#include <QDialog>

namespace Ui {
class casting;
}

class casting : public QDialog
{
    Q_OBJECT

public:
    explicit casting(QWidget *parent = nullptr);
    ~casting();

private:
    Ui::casting *ui;
};

#endif // CASTING_H
