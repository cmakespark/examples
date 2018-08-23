#pragma once

#include <memory>
#include "complexlib.h"


class Trailer
{
public:
    CCCOMPLEXLIB_EXPORT explicit Trailer();
    CCCOMPLEXLIB_EXPORT ~Trailer();

    CCCOMPLEXLIB_EXPORT void drive();
    CCCOMPLEXLIB_EXPORT void stop();

    CCCOMPLEXLIB_EXPORT bool isDriving() const;

private:
    Trailer(const Trailer &other) = delete;
    Trailer& operator=(const Trailer &other) = delete;

    class Impl;
    std::unique_ptr<Impl> d;
};
