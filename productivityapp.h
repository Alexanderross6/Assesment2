#ifndef PRODUCTIVITYAPP_H
#define PRODUCTIVITYAPP_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class productivityapp; }
QT_END_NAMESPACE

class productivityapp : public QMainWindow
{
    Q_OBJECT

public:
    productivityapp(QWidget *parent = nullptr);
    ~productivityapp();

private slots:


    void on_signUpButton_clicked();

    void on_loginButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::productivityapp *ui;






};
#endif // PRODUCTIVITYAPP_H
