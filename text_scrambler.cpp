#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

string scrambleWord(string word) {
    if (word.length() <= 3) return word;

    string middle = word.substr(1, word.length() - 2);
    random_shuffle(middle.begin(), middle.end());

    return word[0] + middle + word[word.length() - 1];
}

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
    srand(time(0));

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
}
