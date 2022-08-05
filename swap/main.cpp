#include <iostream>
#include "swap.h"

int main(int argc, char **argv) {
    swap s(1, 2);
    s.print();
    s.run();
    s.print();
    return 0;
}