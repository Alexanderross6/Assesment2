#include "studentlist.h"
#include "ui_studentlist.h"

studentList::studentList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentList)
{
    ui->setupUi(this);

}

studentList::~studentList()
{
    delete ui;
}
