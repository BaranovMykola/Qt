#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    field = new QLineEdit;
    button = new QPushButton("Push me and i'll change my name:)");
    QVBoxLayout* format = new QVBoxLayout;
    format->addWidget(button);
    format->addWidget(field);
    setLayout(format);
    QObject::connect(button, &QPushButton::clicked, this, &MainWindow::changeButton);
}

void MainWindow::changeButton()
{
    button->setText(field->text());
}

MainWindow::~MainWindow()
{

}
