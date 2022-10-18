#include "adminlogin.h"
#include "qmessagebox.h"
#include "ui_adminlogin.h"
#include "users.h"
#include "studentlist.h"

adminLogin::adminLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
    admin admin1{
        "jayden",
        "jayden",
    };
    admin admin2{
        "alex",
        "alex",
    };
    Admin.push_back(admin1);
    Admin.push_back(admin2);


}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_loginButton_clicked()
{
    QString uName = ui->loginName->text();
    QString pass = ui->loginPassword->text();
    for(int i = 0; i<Admin.size(); i++){
        if(Admin[i].userName == uName && Admin[i].password == pass){
            QMessageBox::information(this, "Success", "login successful");
        }else{
            i++;
        }
    }
    studentList *studentList = new class studentList();
    studentList->show();
    hide();
}

