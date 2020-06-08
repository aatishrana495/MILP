#include <milp/milp.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Milp w;
    w.show();
    while(w.isVisible()){
      a.processEvents();
    }
    return a.exec();
}
