#include "Button.h"
#include <QPushButton>
#include <QString>

Button::Button(int i, QWidget* parent)
    : QPushButton(QString::number(i), parent), i(i)
{
}

void Button::onClick()
{
    emit numClicked(i);
}
