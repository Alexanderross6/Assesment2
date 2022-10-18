#include "productivityapp.h"
#include "./ui_productivityapp.h"
#include "home.h"
#include "users.h"
#include <QMessageBox>
#include <QFile>
#include "adminlogin.h"



using namespace std;


productivityapp::productivityapp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::productivityapp)
{
    ui->setupUi(this);
}

productivityapp::~productivityapp()
{
    delete ui;
}






void productivityapp::on_signUpButton_clicked()
{

    QString fName = ui->signUpFName->text();
    QString lName = ui->signUpLName->text();
    QString email = ui->signUpEmail->text();
    QString password = ui->signUpPassword->text();
    user newUser{fName, lName, email, password};
    if(ui->signUpEmail->text().isEmpty() || ui->signUpFName->text().isEmpty() ||
            ui->signUpLName->text().isEmpty() || ui->signUpPassword->text().isEmpty())
    {
        QMessageBox::information(this, "Warning", "Please make sure all fields are filled out");
    }else
    {
//        Users.push_back(newUser);
        QMessageBox::information(this, "Sign Up", tr("Sign up successful \"%1\"").arg(fName));
    }


}


void productivityapp::on_loginButton_clicked()
{

//    QString email = ui->loginName->text();
//    QString password = ui->loginPassword->text();
//    QString currentUser;

//    QString id, pass;

//    for(int i=0; i<Users.size(); i++){
//        if(email == Users[i].email && password == Users[i].password)
//        {
//            currentUser = Users[i].fName;
//            QMessageBox::information(this, "Login", tr("Login Successful, welcome back  \"%1\" ").arg(currentUser));
//            home *home = new class home();
//            home->show();
//            hide();
//        } else if(email != Users[i].email && password != Users[i].password)

//        {
//            QMessageBox::information(this, "Error", "User Not Found");
//        }
//    }


    home *home = new class home();
    home->show();
    hide();






}


void productivityapp::on_pushButton_clicked()
{
    adminLogin *admin = new class adminLogin();
    admin->show();
    hide();
}

