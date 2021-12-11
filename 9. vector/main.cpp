#include <iostream>
#include "add9.h"

int main() {
    add9::MyVector nums;
    nums.pushBack(10);
    nums.pushBack(-10);
    nums.pushBack(20);
    nums.pushBack(30);
    nums.pushBack(40);
    nums.pushBack(50);
    nums.pushBack(60);
    nums.print();

    std::cout << nums.len() << '\n';

    nums.add(345, 2);
    nums.print();

    std::cout << nums.get(4) << '\n';
    std::cout << nums.get(5467) << '\n';

    std::cout << nums.min() << '\n';

    return 0;
}
