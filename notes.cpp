#include "notes.h"
#include "ui_notes.h"
#include "home.h"
#include <QMessageBox>
#include <QListWidgetItem>
#include <QTreeWidgetItem>
#include "viewnote.h"

notes::notes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::notes)
{
    ui->setupUi(this);

}

notes::~notes()
{
    delete ui;
}

void notes::on_actionHome_triggered()
{
    home *home = new class home();
    home->show();
    hide();
}


void notes::on_saveNoteButton_clicked()
{
    QString title = ui->titleText->text();
    QString subject = ui->subjectText->text();
    QString body = ui->bodyText->toPlainText();
    note newNote{title, subject, body};
    savedNotes.push_back(newNote);
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(title);
    ui->listWidget->addItem(newItem);
    ui->titleText->clear();
    ui->subjectText->clear();
    ui->bodyText->clear();
    QMessageBox::information(this,"Note Saved", "Your note has been saved!");

}


void notes::on_deleteNoteButton_clicked()
{
    if(ui->listWidget->currentItem()->text() == ui->titleLabel_2->text()){
        ui->titleLabel_2->clear();
        ui->subjectLabel_2->clear();
        ui->bodyLabel_2->clear();
    }
    qDeleteAll(ui->listWidget->selectedItems());


}


void notes::on_viewNoteButton_clicked()
{
    QString text = ui->listWidget->currentItem()->text();
    qDebug() << text;
    for(int i =0; i<savedNotes.size();i++){
        if(savedNotes[i].title == text){

            ui->titleLabel_2->setText(savedNotes[i].title);
            ui->subjectLabel_2->setText(savedNotes[i].subject);
            ui->bodyLabel_2->setText(savedNotes[i].body);
        }
    };
}

