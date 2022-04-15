#include <QApplication>
#include <array>
#include <random>
#include "jkqtplotter/jkqtplotter.h"
#include "jkqtplotter/graphs/jkqtpscatter.h"
#include "speedtestplot.h"

int main(int argc, char* argv[])
{
        
#if QT_VERSION >= 0x050600
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); // DPI support
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps); //HiDPI pixmaps
#endif
    QApplication app(argc, argv);


    // 1. create a plotter window and get a pointer to the internal datastore (for convenience)
    SpeedTestPlot plot;

    QTimer::singleShot(500, &plot, SLOT(plotNewData()));

    return app.exec();
}
