#include "add3.h"

int main() {

    ifstream in("../input.txt");
    ofstream out("../output.txt");

    unsigned int max_length = 0;
    string max_word;
    unsigned int min_length = UINT_MAX;
    string min_word;


    vector<string> words;

    while (!in.eof()) {
        string word = lab3::getWord(words, in);

        lab3::compare(word, max_length, max_word, min_length, min_word);
    }
    sort(words.begin(), words.end());

    lab3::writeAnswer(out, min_word, max_word, words);

    out.close();
    return 0;
}
