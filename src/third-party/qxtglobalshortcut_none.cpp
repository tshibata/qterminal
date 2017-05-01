#include "qxtglobalshortcut_p.h"

bool QxtGlobalShortcutPrivate::eventFilter(void *message)
{
    return false;
}
quint32 QxtGlobalShortcutPrivate::nativeKeycode(Qt::Key key)
{
    return 0;
}
quint32 QxtGlobalShortcutPrivate::nativeModifiers(Qt::KeyboardModifiers modifiers)
{
    return 0;
}
bool QxtGlobalShortcutPrivate::registerShortcut(quint32 nativeKey, quint32 nativeMods)
{
    return false;
}

bool QxtGlobalShortcutPrivate::unregisterShortcut(quint32 nativeKey, quint32 nativeMods)
{
    return false;
}

