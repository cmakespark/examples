#include "trailer.h"
#include "trailer_p.h"


Trailer::Trailer():
    d(new Impl())
{
}

Trailer::~Trailer()
{

}

void Trailer::drive()
{
    d->m_driving = true;
}

void Trailer::stop()
{
    d->m_driving = false;
}

bool Trailer::isDriving() const
{
    return d->m_driving;
}

Trailer::Impl::Impl():
    m_driving(false)
{}
