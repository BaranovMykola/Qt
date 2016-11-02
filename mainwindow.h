#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QObject>

class MainWindow : public QWidget
{
private:
    Q_OBJECT
    QLineEdit* field;
    QPushButton* button;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void changeButton();
};

#endif // MAINWINDOW_H
