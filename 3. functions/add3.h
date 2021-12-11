#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

namespace lab3 {
    string clearingWord(string &word);

    void addToList(string &word, vector <string> &words);

    string getWord(vector <string> &words, ifstream &in);

    void compare(string &word, unsigned int &max_length, string &max_word, unsigned int &min_length, string &min_word);

    void writeAnswer(ofstream &out, string &min_word, string &max_word, vector <string> &words);
}