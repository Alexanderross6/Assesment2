#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QWidget>

namespace Ui {
class adminLogin;
}

class adminLogin : public QWidget
{
    Q_OBJECT

public:
    explicit adminLogin(QWidget *parent = nullptr);
    ~adminLogin();

private slots:
    void on_loginButton_clicked();

private:
    Ui::adminLogin *ui;
};

#endif // ADMINLOGIN_H
