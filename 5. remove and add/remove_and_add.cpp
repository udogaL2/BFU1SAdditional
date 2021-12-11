#include <iostream>
#include <fstream>

#define N 20000

using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int compDigits(int num) {
    int comp = 1;
    while (num) {
        comp *= num % 10;
        num /= 10;
    }
    return comp;
}

void deleteElement(int mas[], int i, int &n){
    for (int j = i; j < n - 1; j++) {
        swap(mas[j], mas[j + 1]);
    }
    n--;
}

void addElement(int mas[], int &i, int &n){
    for (int j = n; j >= i + 1; j--) {
        swap(mas[j], mas[j - 1]);
    }
    mas[i] = mas[i + 1];

    i += 2;
    n++;
}

int read(ifstream &in, int mas[]){
    int n;
    in >> n;

    for (int i = 0; i < n; i++) {
        in >> mas[i];
    }
    return n;
}

void write(ofstream &out, int mas[], int n){
    for (int j = 0; j < n; j++) {
        out << mas[j] << ' ';
    }
}

int main() {
    ifstream in("../input.txt");
    ofstream out("../output.txt");

    int mas[N];
    int n = read(in, mas);

    int i = 0;
    while (i < n) {
        if (sumDigits(mas[i]) == 18) {
            deleteElement(mas, i, n); // "удалить" элемент с индексом i с количеством чисел n
        } else if (compDigits(mas[i]) % 35 == 0) {
            addElement(mas, i, n); // добавить элемент с индексом i на место с индексом i+1 с количеством чисел n
        } else
            i++;
    }

    write(out, mas, n);
    out.close();
    return 0;
}
