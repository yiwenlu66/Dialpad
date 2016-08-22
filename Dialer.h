#ifndef DIALER_H
#define DIALER_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include <QLabel>

const int NUM_BUTTONS = 10;
const int HEIGHT = 30;

class Dialer : public QMainWindow {
    Q_OBJECT
public:
    Dialer(QWidget* parent = 0);
public slots:
    void append();
private:
    QLabel* label;
    QPushButton* buttons[NUM_BUTTONS];
};

#endif
