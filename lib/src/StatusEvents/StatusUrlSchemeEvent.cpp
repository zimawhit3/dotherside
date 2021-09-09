#include "DOtherSide/StatusEvents/StatusUrlSchemeEvent.h"

#include <QFileOpenEvent>

bool StatusUrlSchemeEvent::eventFilter(QObject* obj, QEvent* event)
{
#ifdef Q_OS_MACOS
    if (event->type() == QEvent::FileOpen)
    {
        QFileOpenEvent* fileEvent = static_cast<QFileOpenEvent*>(event);
        if(fileEvent)
        {
            emit urlActivated(fileEvent->url().toString());
        }
    }
#endif

    return QObject::eventFilter(obj, event);
}
