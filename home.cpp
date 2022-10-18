#include "home.h"
#include "ui_home.h"
#include "notes.h"
#include "users.h"
#include <QDebug>
#include "account.h"


home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    user CurrentUser = getCurrentUser();
    ui->setupUi(this);
    qDebug() << CurrentUser.fName;
    ui->userRatingLabel->setText(QString::number(getCurrentUser().rating)+"/"+QString::number(getCurrentUser().maxRating));
    ui->userCompletedTasksLabel->setText(QString::number(getCurrentUser().completedTasks)+"/"+QString::number(getCurrentUser().maxTasks));
    ui->userCompletedEventsLabel->setText(QString::number(getCurrentUser().completedEvents)+"/"+QString::number(getCurrentUser().maxCompletedEvents));


}

home::~home()
{
    delete ui;
}

void home::on_actionNotes_triggered()
{
    notes *notes = new class notes();
    notes->show();
    hide();
}


void home::on_actionAccount_triggered()
{
    account *account = new class account();
    account->show();
    hide();
}

