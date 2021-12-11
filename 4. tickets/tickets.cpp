#include <iostream>

using namespace std;

//void newTicket(int *cur_ticket) {
//    if ((cur_ticket[5] + 1) % 10 == 0) {
//        cur_ticket[5] = 0;
//        if ((cur_ticket[4] + 1) % 10 == 0) {
//            cur_ticket[4] = 0;
//            if ((cur_ticket[3] + 1) % 10 == 0) {
//                cur_ticket[3] = 0;
//                if ((cur_ticket[2] + 1) % 10 == 0) {
//                    cur_ticket[2] = 0;
//                    if ((cur_ticket[1] + 1) % 10 == 0) {
//                        cur_ticket[1] = 0;
//                        cur_ticket[0] += 1;
//                    } else {
//                        cur_ticket[1] += 1;
//                    }
//                } else {
//                    cur_ticket[2] += 1;
//                }
//            } else {
//                cur_ticket[3] += 1;
//            }
//        } else {
//            cur_ticket[4] += 1;
//        }
//    } else {
//        cur_ticket[5] += 1;
//    }
//}

void newNewTicket(int *cur_ticket) {
    for (int i = 5; i >= 0; i--) {
        if (cur_ticket[i] < 9) {
            cur_ticket[i]++;
            break;
        } else
            cur_ticket[i] = 0;
    }
}

bool isHappy(const int *cur_ticket) {
    return cur_ticket[0] + cur_ticket[1] + cur_ticket[2] == cur_ticket[3] + cur_ticket[4] + cur_ticket[5];
}

unsigned int searchWithMas(){
    int current_ticket[6];
    for (int &i: current_ticket) {
        i = 0;
    }

    unsigned int count = 0;

    for (int ticket = 1; ticket < 1000000; ticket++) {
        newNewTicket(current_ticket);
        if (isHappy(current_ticket))
            count += 1;
    }
    return count;
}

int basicSearch() {
    int count = 0;
    int N;

    for (int i = 1; i < 1000000; i++) {
        if (i % 10 + (i / 10) % 10 + (i / 100) % 10 == (i / 1000) % 10 + (i / 10000) % 10 + (i / 100000) % 10)
            count++;
    }
    return count;
}

int main() {
    // простой поиск через остатки и цикл
    cout << basicSearch() << '\n';
    // поиск с помощью массива и генерацией нового билета
    cout << searchWithMas() << '\n';
    return 0;
}
