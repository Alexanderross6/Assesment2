#ifndef NOTES_H
#define NOTES_H

#include "ui_notes.h"
#include <QMainWindow>

namespace Ui {
class notes;
}

class notes : public QMainWindow
{
    Q_OBJECT

public:
    explicit notes(QWidget *parent = nullptr);
    ~notes();

private slots:
    void on_actionHome_triggered();

    void on_saveNoteButton_clicked();

    void on_deleteNoteButton_clicked();

    void on_viewNoteButton_clicked();

private:
    Ui::notes *ui;
    struct note{
        QString title, subject, body;

    };
    QVector<note> savedNotes;

};

#endif // NOTES_H
