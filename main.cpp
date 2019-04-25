#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QtWidgets>
#include "my_wizardpage.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#ifndef QT_NO_TRANSLATION
    QString translatorFileName = QLatin1String("qt_");
    translatorFileName += QLocale::system().name();
    QTranslator *translator = new QTranslator(&app);
    if (translator->load(translatorFileName, QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
        app.installTranslator(translator);
#endif

    QWizard wizard;
    wizard.addPage(new MyWizardPage("test", "test 2"));
    wizard.addPage(new MyWizardPage("test", "test 3"));
    wizard.addPage(new MyWizardPage("test", "test 4"));

    wizard.setWindowTitle("My custom wizard");
    wizard.show();

    return app.exec();
}
