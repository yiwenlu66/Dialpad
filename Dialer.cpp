#include "Dialer.h"
#include <QString>
#include <QSignalMapper>

Dialer::Dialer(QWidget* parent)
    : QMainWindow(parent)
{
    label = new QLabel(this);
    QSignalMapper* signalMapper = new QSignalMapper(this);
    for (int i = 0; i < NUM_BUTTONS; ++i) {
        buttons[i] = new QPushButton(QString::number(i), this);
        buttons[i]->move(0, (i + 1) * HEIGHT);
        connect(buttons[i], SIGNAL(clicked()), signalMapper, SLOT(map()));
        signalMapper->setMapping(buttons[i], i);
    }
    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(append(int)));
}

void Dialer::append(int i)
{
    label->setText(label->text() + QString::number(i));
}
