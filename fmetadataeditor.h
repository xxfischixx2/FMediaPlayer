#ifndef FMETADATAEDITOR_H
#define FMETADATAEDITOR_H

#include <QObject>

class FMetaDataEditor : public QObject
{
    Q_OBJECT

    enum MetaDataKey { Title, Artist, Album, Comment, Genre, Year, Track };

public:

    explicit FMetaDataEditor(QObject *parent = 0);

signals:

public slots:
};

#endif // FMETADATAEDITOR_H
