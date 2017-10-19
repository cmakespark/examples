#pragma once

#include <memory>
#include "simplelib.h"


class CCSIMPLELIB_EXPORT Dog
{
public:
    explicit Dog();
    ~Dog();

    int weight() const;

    void bark();
    int numberOfBarks() const;

private:
    Dog(const Dog &other) = delete;
    Dog& operator=(const Dog &other) = delete;

    class Impl;
    std::unique_ptr<Impl> d;
};
