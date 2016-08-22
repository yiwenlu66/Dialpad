#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton {
    Q_OBJECT
signals:
    void numClicked(int);
private slots:
    void onClick();
public:
    Button(int i, QWidget* parent);
private:
    int i;
};

#endif
