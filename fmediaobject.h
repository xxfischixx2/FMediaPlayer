#ifndef FMEDIAOBJECT_H
#define FMEDIAOBJECT_H

#include <QObject>

class FMediaObject : public QObject
{
    Q_OBJECT
public:
    explicit FMediaObject(QObject *parent = 0);

    FMediaObject(const FMediaObject &other);

signals:

public slots:
};

#endif // FMEDIAOBJECT_H
