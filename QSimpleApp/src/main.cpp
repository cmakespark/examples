#include <QCoreApplication>
#include <QDebug>
#include <dog.h>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Dog dog;

    if (dog.numberOfBarks() == 0)
    {
        qDebug() << "Dog hasn't barked before.";
    }

    dog.bark();
    dog.bark();
    qDebug() << "Dog has barked " << dog.numberOfBarks() << " times.";

    return app.exec();
}
