#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int getSumFigure(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int getMultFigure(int num) {
    int mult = 1;
    while (num) {
        mult *= num % 10;
        num /= 10;
    }
    return mult;
}

void initVector(vector<int> &nums, ifstream &in) {
    while (!in.eof()) {
        int num;
        in >> num;
        nums.push_back(num);
    }
}

void deleteNums(vector<int> &nums) {
    for (auto it = nums.begin(); it != nums.end();) {
        if (getSumFigure(*it) == 18) {
            it = nums.erase(it);
        } else {
            it++;
        }
    }
}

void copyNums(vector<int> &nums) {
    for (auto it = nums.begin(); it != nums.end();) {
        if (getMultFigure(*it) % 35 == 0 and getMultFigure(*it) != 0) {
            nums.insert(it + 1, *it);
            it++;
        }
        it++;
    }
}

void writeAnswer(vector<int> &nums, ofstream &out) {
    for (int num: nums) {
        out << num << ' ';
    }
}

int main() {
    ifstream in("../input.txt");
    ofstream out("../output.txt");
    vector<int> nums;

    // заполнение вектора числами
    initVector(nums, in);

    // удаление чисел по условию
    deleteNums(nums);

    // дублирование чисел по условию
    copyNums(nums);

    // запись последовательности в файл
    writeAnswer(nums, out);
    out.close();
    return 0;
}
