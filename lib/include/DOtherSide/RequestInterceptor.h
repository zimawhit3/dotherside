#include <QtCore/QDir>
#include <QtCore/QDebug>
#include "DOtherSide/DOtherSide.h"
#include <iostream>
#include <QtCore/QDir>
#include <QtCore/QDebug>
#include <QtCore/QModelIndex>
#include <QtCore/QHash>
#include <QtCore/QResource>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkDiskCache>
#include <QtNetwork/QNetworkConfigurationManager>
#include <QtGui/QGuiApplication>
#include <QtGui/QIcon>
#include <QtQml/QQmlContext>
#include <QtQml/QQmlNetworkAccessManagerFactory>
#include <QtCore>
#include <QtWebEngineCore/QWebEngineUrlRequestInterceptor>
#include <QtWebEngineWidgets/QWebEngineProfile>

class RequestInterceptor : public QWebEngineUrlRequestInterceptor
{
Q_OBJECT
public:
    explicit RequestInterceptor(QObject * parent = Q_NULLPTR) : QWebEngineUrlRequestInterceptor(parent) {}
    virtual void interceptRequest(QWebEngineUrlRequestInfo & info) Q_DECL_OVERRIDE;
};