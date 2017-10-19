#pragma once

#include <memory>
#include "complexlib.h"


class CCCOMPLEXLIB_EXPORT Car
{
public:
    explicit Car();
    ~Car();

    void drive();
    void stop();

    bool isDriving() const;

private:
    Car(const Car &other) = delete;
    Car& operator=(const Car &other) = delete;

    class Impl;
    std::unique_ptr<Impl> d;
};
