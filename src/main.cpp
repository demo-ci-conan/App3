
#include <iostream>

#include "libD/libD.h"

int main() {
    std::cout << "App3: " << std::endl;
    hello_libD(1, "called from App2");

    return 0;
}