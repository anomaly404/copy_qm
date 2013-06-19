#ifndef DETECT_H
#define DETECT_H

#ifdef Q_WS_X11
QString *OS=new QString("Linux");
#endif
#ifdef Q_WS_WIN
QString *OS=new QString("Windows");
#endif
#ifdef Q_WS_MACX
QString *OS=new QString("Mac");
#endif

#endif // DETECT_H
