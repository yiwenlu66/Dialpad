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
        connect(buttons[i], SIGNAL(clicked()), this, SLOT(append()));
    }
}

void Dialer::append()
{
    int num = -1;
    for (int i = 0; i < NUM_BUTTONS; ++i) {
        if (QObject::sender() == buttons[i]) {
            num = i;
            break;
        }
    }
    if (num != -1) {
        label->setText(label->text() + QString::number(num));
    }
}
