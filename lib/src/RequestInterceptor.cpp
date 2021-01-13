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
#include <QClipboard>
#include <QtGui/QPixmap>
#include <QtGui/QImage>
#include <QtGui/QColorSpace>
#include <QtGui/QTextDocumentFragment>
#include <QtCore/QFile>
#include <QtCore/QUuid>
#include <QtQml/QQmlApplicationEngine>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickImageProvider>
#include <QTranslator>
#ifdef QT_QUICKCONTROLS2_LIB
#include <QtQuickControls2/QQuickStyle>
#endif
#include <QtWidgets/QApplication>

#include "DOtherSide/RequestInterceptor.h"


void RequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo & info)
{
    // Intercepting the requested URL
    QUrl url = info.requestUrl();
    qDebug() << ">>>>>>>>>>>>>>>>>>>>>>>>>Request URL: " << url;

    // Optionally redirect the request URL but it only works for requests 
    // without payload data such as GET ones
    //info.redirect(QUrl("https://www.google.com"));

    // Set HTTP header
    //QByteArray httpHeaderName = "SomeHeaderName";
   // QByteArray httpHeaderValue = "SomeHeaderValue";
    //info.setHttpHeader(httpHeaderName, httpHeaderValue);
}