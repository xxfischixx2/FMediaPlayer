#ifndef FMEDIAPLAYLIST_H
#define FMEDIAPLAYLIST_H

#include <QObject>
#include "fmediaobject.h"

class FMediaPlaylist : public QObject
{
    Q_OBJECT

    Q_PROPERTY(PlaybackMode playbackMode READ playbackMode WRITE setPlaybackMode)

    Q_PROPERTY(int currentIndex READ currentIndex WRITE setCurrentIndex NOTIFY currentIndexChanged)

    Q_PROPERTY(FMediaObject currentMedia READ currentMedia NOTIFY currentMediaChanged)

    Q_ENUMS(PlaybackMode);

public:

    enum PlaybackMode {CurrentItemOnce, CurrentItemInLoop, Sequential, Loop, Random};

    explicit FMediaPlaylist(QObject *parent = 0);

    void setPlaybackMode(PlaybackMode playbackMode);

    PlaybackMode playbackMode();

    int currentIndex();

    FMediaObject currentMedia();

    void addMedia(FMediaObject mediaObject);

    void insertMedia(int position, FMediaObject mediaObject);

    void clear();

    bool isEmpty();

    void moveMedia(int from, int to);

    int mediaCount();

    void removeMedia(int position);

    FMediaObject media(int position);

signals:

    void currentMediaChanged(FMediaObject media);

    void currentIndexChanged(int position);

public slots:

    void setCurrentIndex(int position);

    void next();

    void previous();

private:

    int m_position;

    PlaybackMode m_playbackMode;

    QList<FMediaObject> playlist;

};

#endif // FMEDIAPLAYLIST_H
