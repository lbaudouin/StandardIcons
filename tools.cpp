#include "tools.h"

#include <QClipboard>
#include <QGuiApplication>


Tools::Tools(QObject *parent) : QObject(parent)
{

}

void Tools::setTextToClipboard(const QString &text)
{
    QClipboard *clipboard = qApp->clipboard();
    clipboard->setText(text);
}
