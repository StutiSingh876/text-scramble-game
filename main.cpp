#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <ctime>
#include <random>

using namespace std;

// Scramble the middle characters of a word (leave first and last as-is)
string scrambleWord(string word) {
    if (word.length() <= 3) return word;

    string middle = word.substr(1, word.length() - 2);

    random_device rd;
    mt19937 g(rd());
    shuffle(middle.begin(), middle.end(), g);

    return word[0] + middle + word[word.length() - 1];
}

// Split sentence into words
vector<string> splitSentence(string sentence) {
    stringstream ss(sentence);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    vector<string> words = splitSentence(sentence);
    vector<string> scrambledWords;

    for (string word : words) {
        scrambledWords.push_back(scrambleWord(word));
    }

    cout << "\nScrambled Sentence:\n";
    for (string word : scrambledWords) {
        cout << word << " ";
    }

    cout << "\n\nCan you guess the original sentence?\n";

    return 0;
}
