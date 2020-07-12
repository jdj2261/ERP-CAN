#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QStringList>
#include <QLoggingCategory>

#include "modules/comboboxmodel.h"
#include "modules/canmanager.h"
#include "modules/pcanmanager.h"
#include "modules/connect.h"
#include <iostream>
#include <QThread>
//#include <linux/sysctl.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QLoggingCategory::setFilterRules(QStringLiteral("qt.canbus* = true"));

    QGuiApplication app(argc, argv);


    CanManager *canManager = new CanManager();
    canManager->connectDevice();
    //    canManager.start();

    QQmlApplicationEngine engine;

    qmlRegisterType<CanManager>("unmansol.erp42.canmanager", 0, 1, "CanManager");
    engine.rootContext()->setContextProperty("canManager", canManager);

    engine.rootContext();


    PCanManager pcanManager;
    qmlRegisterType<PCanManager>("unmansol.erp42.pcanmanager", 0, 1, "PCanManager");
    engine.rootContext()->setContextProperty("pcanManager", &pcanManager);
    pcanManager.start();

    //    QThread *myThread = new QThread();
    //    PCanManager *pcanManager = new PCanManager();
    //    pcanManager->moveToThread(myThread);

    //    QObject::connect(myThread, SIGNAL(started()), pcanManager,SLOT(run()));
    //    myThread->start();
    //    comboboxmodel combo;

    //    QStringList tmp;
    //    tmp << "peakcan" << "passthrucan" << "socketcan" << "tinycan" << "virtualcan";
    //    combo.setComboList(tmp);

    //    QQmlContext *ownContext = engine.rootContext();
    //    ownContext->setContextProperty("myModel", QVariant::fromValue(combo.comboList()));

    //    QQmlContext *classContext = engine.rootContext();
    //    classContext->setContextProperty("comboModel", &combo);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    //    delete canManager;
    //    delete pcanManager;


    return app.exec();
}



