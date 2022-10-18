#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QMainWindow>

namespace Ui {
class account;
}

class account : public QMainWindow
{
    Q_OBJECT

public:
    explicit account(QWidget *parent = nullptr);
    ~account();

private:
    Ui::account *ui;
};

#endif // ACCOUNT_H
