#include "add9.h"
#include <iostream>
#include <algorithm>

namespace add9 {
    MyVector::MyVector() {
        count = 0;
        capacity = 1;
        array = new int[1]();
    }

    MyVector::~MyVector() {
        delete[] array;
    }

    unsigned int MyVector::len() const {
        return count;
    }

    void MyVector::pushBack(int num) {
        isFit();
        count++;
        array[count - 1] = num;
    }

    void MyVector::add(int num, int index) {
        if (index < count) {
            isFit();
            for (int i = count; i >= index + 1; i--) {
                std::swap(array[i], array[i - 1]);
            }
            array[index] = num;
            count++;
        } else if (index == count)
            pushBack(num);
        else {
            std::cout << "ERROR: Index out of range.\n";
        }
    }

    int MyVector::get(int index) {
        if (index <= count) {
            return array[index];
        } else {
            std::cout << "ERROR: Index out of range.\n";
            return 0;
        }
    }

    int MyVector::min() {
        if (count > 0) {
            int min_el = array[0];
            for (int i = 1; i < count; i++) {
                min_el = std::min(min_el, array[i]);
            }
            return min_el;
        }
        return 0;
    }


    void MyVector::isFit() {
        if (count + 1 < capacity) {
            int *temp = new int[capacity + 2];
            for (int i = 0; i < capacity; i++) {
                temp[i] = array[i];
            }
            delete[] array;
            capacity += 2;
            array = temp;
        }
    }

    void MyVector::print() {
        for (int i = 0; i < count; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << '\n';
    }
}