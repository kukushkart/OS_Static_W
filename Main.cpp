//testStaticLib
#include <iostream>
#include "Number.h"

int main() {
    Number a(10);
    Number b(2);
    Number c = a / b;

    std::cout << "Result: " << c.GetValue() << std::endl;
    return 0;

}
