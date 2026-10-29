#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("statement.txt");
    string fileData;

    getline(file, fileData);
    file.close();

    // Count vowels
    int vowels = 0;
    for (int i = 0; i < fileData.length(); i++) {
        char letter = tolower(fileData[i]);

        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            vowels++;
        }
    }

    // Count words
    int words = 0;
    bool insideWord = false;

    for (int i = 0; i < fileData.length(); i++) {
        if (fileData[i] != ' ' && insideWord == false) {
            words++;
            insideWord = true;
        } else if (fileData[i] == ' ') {
            insideWord = false;
        }
    }

    // Reverse the statement
    string reversed = fileData;
    for (int i = 0; i < fileData.length(); i++) {
        reversed[i] = fileData[fileData.length() - 1 - i];
    }

    // Capitalize the second letter of each word
    string capitalized = fileData;
    bool secondLetter = false;

    for (int i = 0; i < capitalized.length(); i++) {
        if (capitalized[i] == ' ') {
            secondLetter = false;
        } else if (secondLetter == false) {
            secondLetter = true; // First letter of the word
        } else {
            capitalized[i] = toupper(capitalized[i]);
            secondLetter = false;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;
    cout << "Reversed statement: " << reversed << endl;
    cout << "Second letters capitalized: " << capitalized << endl;

    return 0;
}