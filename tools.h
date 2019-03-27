#ifndef TOOLS_H
#define TOOLS_H

#include <QObject>

class Tools : public QObject
{
    Q_OBJECT
public:
    explicit Tools(QObject *parent = nullptr);

    Q_INVOKABLE void setTextToClipboard( const QString &text );

signals:

public slots:
};

#endif // TOOLS_H
