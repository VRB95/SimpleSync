#include "SimpleSync.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleSync w;
    w.show();

    return a.exec();
}
