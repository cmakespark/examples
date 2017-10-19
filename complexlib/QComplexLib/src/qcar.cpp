#include "qcar.h"
#include "qcar_p.h"


QCar::QCar(QObject *parent):
    QObject(parent),
    d_ptr(new QCarPrivate())
{
}

QCar::~QCar()
{
}

void QCar::drive()
{
    Q_D(QCar);
    d->m_car.drive();
}

void QCar::stop()
{
    Q_D(QCar);
    d->m_car.stop();
}

bool QCar::isDriving() const
{
    Q_D(const QCar);
    return d->m_car.isDriving();
}

QCarPrivate::QCarPrivate():
    m_car()
{
}
