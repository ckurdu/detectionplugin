
#ifndef RECOGNATIONLIBRARY_GLOBAL_H
#define RECOGNATIONLIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RECOGNATIONLIBRARY_LIBRARY)
#  define RECOGNATIONLIBRARY_EXPORT Q_DECL_EXPORT
#else
#  define RECOGNATIONLIBRARY_EXPORT Q_DECL_IMPORT
#endif

#endif // RECOGNATIONLIBRARY_GLOBAL_H
