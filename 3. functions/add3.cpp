#include "add3.h"

namespace lab3 {
    string clearingWord(string &word) {
        string pure_word;
        for (const auto &symbol: word) {
            if (isalpha(symbol))
                pure_word.push_back((char) tolower(symbol));
        }
        return pure_word;
    }

    void addToList(string &word, vector <string> &words) {
        auto it = find(words.begin(), words.end(), word);

        if (it == words.end()) {
            words.push_back(word);
        }
    }

    string getWord(vector <string> &words, ifstream &in) {
        string word;
        in >> word;
        word = clearingWord(word);

        addToList(word, words);

        return word;
    }

    void compare(string &word, unsigned int &max_length, string &max_word, unsigned int &min_length, string &min_word) {
        unsigned int length;
        length = word.size();

        if (length > max_length) {
            max_length = length;
            max_word = word;
        }
        if (length < min_length) {
            min_length = length;
            min_word = word;
        }
    }

    void writeAnswer(ofstream &out, string &min_word, string &max_word, vector <string> &words) {
        out << "Самое длинное слово: " << max_word << '\n';
        out << "Самое короткое слово: " << min_word << '\n';

        for (const auto &w: words) {
            out << w << ' ';
        }
    }
}