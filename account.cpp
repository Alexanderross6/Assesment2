#include "account.h"
#include "ui_account.h"
#include "users.h"

account::account(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
    ui->userName->setText(getCurrentUser().fName + " " + getCurrentUser().lName);
    ui->userEmail->setText(getCurrentUser().email);
}

account::~account()
{
    delete ui;
}
