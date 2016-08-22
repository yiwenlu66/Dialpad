#include "Dialer.h"
#include "Button.h"
#include <QString>

Dialer::Dialer(QWidget* parent)
    : QMainWindow(parent)
{
    label = new QLabel(this);
    for (int i = 0; i < NUM_BUTTONS; ++i) {
        buttons[i] = new Button(i, this);
        buttons[i]->move(0, (i + 1) * HEIGHT);
        connect(buttons[i], SIGNAL(clicked()), buttons[i], SLOT(onClick()));
        connect(buttons[i], SIGNAL(numClicked(int)), this, SLOT(append(int)));
    }
}

void Dialer::append(int i)
{
    label->setText(label->text() + QString::number(i));
}
