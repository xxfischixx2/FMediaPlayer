#ifndef FMULTIMEDIA_GLOBAL_H
#define FMULTIMEDIA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FMULTIMEDIA_LIBRARY)
#  define FMULTIMEDIASHARED_EXPORT Q_DECL_EXPORT
#else
#  define FMULTIMEDIASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FMULTIMEDIA_GLOBAL_H