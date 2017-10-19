#include "car.h"
#include "car_p.h"


Car::Car():
    d(new Impl())
{
}

Car::~Car()
{

}

void Car::drive()
{
    d->m_driving = true;
}

void Car::stop()
{
    d->m_driving = false;
}

bool Car::isDriving() const
{
    return d->m_driving;
}

Car::Impl::Impl():
    m_driving(false)
{}
