#include "fmediaplaylist.h"
#include "fmediaobject.h"

FMediaPlaylist::FMediaPlaylist(QObject *parent) : QObject(parent)
{

}

void FMediaPlaylist::setPlaybackMode(FMediaPlaylist::PlaybackMode playbackMode)
{

    m_playbackMode = playbackMode;

}

FMediaPlaylist::PlaybackMode FMediaPlaylist::playbackMode()
{

    return m_playbackMode;

}

int FMediaPlaylist::currentIndex()
{

    return m_position;

}

FMediaObject FMediaPlaylist::currentMedia()
{

     return playlist.at(m_position);

}

void FMediaPlaylist::addMedia(FMediaObject mediaObject)
{

    playlist.append(mediaObject);

}

void FMediaPlaylist::insertMedia(int position, FMediaObject mediaObject)
{

    playlist.insert(position, mediaObject);

}

void FMediaPlaylist::clear()
{

    playlist.clear();

}

bool FMediaPlaylist::isEmpty()
{

    return playlist.isEmpty();

}

void FMediaPlaylist::moveMedia(int from, int to)
{

    playlist.move(from, to);

}

int FMediaPlaylist::mediaCount()
{

    return playlist.count();

}

void FMediaPlaylist::removeMedia(int position)
{

    playlist.removeAt(position);

}

FMediaObject FMediaPlaylist::media(int position)
{

    return playlist[position];

}

void FMediaPlaylist::setCurrentIndex(int position)
{

    m_position = position;

    emit currentIndexChanged(m_position);

    emit currentMediaChanged(playlist[m_position]);

}

void FMediaPlaylist::next()
{

    m_position = m_position + 1;

    emit currentIndexChanged(m_position);

    emit currentMediaChanged(playlist[m_position]);

}

void FMediaPlaylist::previous()
{

    m_position = m_position - 1;

    emit currentIndexChanged(m_position);

    emit currentMediaChanged(playlist[m_position]);

}
