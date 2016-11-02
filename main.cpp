#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *label = new QLabel("Hello, world!");
    label->setParent(&w);
    w.setCentralWidget(label);
    w.show();

    return a.exec();
}
