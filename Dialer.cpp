#include "Dialer.h"
#include <QString>
#include <QSignalMapper>

Dialer::Dialer(QWidget* parent)
    : QMainWindow(parent)
{
    label = new QLabel(this);
    for (int i = 0; i < NUM_BUTTONS; ++i) {
        buttons[i] = new QPushButton(QString::number(i), this);
        buttons[i]->move(0, (i + 1) * HEIGHT);
        connect(buttons[i], &QPushButton::clicked, this, [this, i]{ append(i); });
    }
}

void Dialer::append(int i)
{
    label->setText(label->text() + QString::number(i));
}
