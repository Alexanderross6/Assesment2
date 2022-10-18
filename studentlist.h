#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <QMainWindow>

namespace Ui {
class studentList;
}

class studentList : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentList(QWidget *parent = nullptr);
    ~studentList();

private:
    Ui::studentList *ui;
};

#endif // STUDENTLIST_H
