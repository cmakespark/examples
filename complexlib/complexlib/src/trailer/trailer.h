#pragma once

#include <memory>
#include "complexlib.h"


class CCCOMPLEXLIB_EXPORT Trailer
{
public:
    explicit Trailer();
    ~Trailer();

    void drive();
    void stop();

    bool isDriving() const;

private:
    Trailer(const Trailer &other) = delete;
    Trailer& operator=(const Trailer &other) = delete;

    class Impl;
    std::unique_ptr<Impl> d;
};
