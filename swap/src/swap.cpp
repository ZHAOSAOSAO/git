#include "swap.h"
#include <iostream>

void swap::run() {
    int tmp;
    tmp = _a;
    _a = _b;
    _b = tmp;
}

void swap::print() {
    std::cout << "_a = " << _a << std::endl;
    std::cout << "_b = " << _b << std::endl;
}