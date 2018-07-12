#include <car.h>
#include <trailer.h>
#include <iostream>


int main(int, char *[])
{
    Car c;

    c.drive();
    std::cout << "is driving? " << (c.isDriving() ? "yes":"no") << std::endl;

    c.stop();
    std::cout << "is driving? " << (c.isDriving() ? "yes":"no") << std::endl;

    Trailer t;
    std::cout << "is driving? " << (t.isDriving() ? "yes":"no") << std::endl;

    return 0;
}
