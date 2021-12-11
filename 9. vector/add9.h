#pragma once
namespace add9 {
    class MyVector {
    public:
        MyVector();

        ~MyVector();

        unsigned int len() const;

        void pushBack(int num);

        void add(int num, int index);

        int get(int index);

        int min();

        void print();
    private:
        // текущее количество элементов в массиве
        unsigned int count;
        // максимальное количество элементов в массиве
        unsigned int capacity;
        // сам массив (логично)
        int *array;

        void isFit();
    };
}