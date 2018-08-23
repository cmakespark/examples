#pragma once

#include <memory>
#include "complexlib.h"


class Car
{
public:
    CCCOMPLEXLIB_EXPORT explicit Car();
    CCCOMPLEXLIB_EXPORT ~Car();

    CCCOMPLEXLIB_EXPORT void drive();
    CCCOMPLEXLIB_EXPORT void stop();

    CCCOMPLEXLIB_EXPORT bool isDriving() const;

private:
    Car(const Car &other) = delete;
    Car& operator=(const Car &other) = delete;

    class Impl;
    std::unique_ptr<Impl> d;
};
