#include "productivityapp.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    productivityapp w;
    w.show();

    return a.exec();
}
