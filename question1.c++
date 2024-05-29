#include <iostream>
#include <cctype>

using namespace std;

char get_input() {
char letter;

    cout << "Please enter a letter: ";
    cin >> letter;
    letter = tolower(letter); // Convert to lowercase
    return letter;
}

bool is_vowel(char letter) {
   
    char vowels[] = "aeiou";
    for (int i = 0; i < 5; ++i) {
        if (letter == vowels[i]) {
            return true;
        }
    }
    return false;
}

bool is_consonant(char letter) {
    // Checking if the letter is a consonant
    return isalpha(letter) && !is_vowel(letter);
}

string classify_letter(char letter) {
    // Checking if the letter is a vowel or consonant
    if (isalpha(letter)) { // Ensure the input is an alphabetic character
        if (is_vowel(letter)) {
            return "vowel";
        } else if (is_consonant(letter)) {
            return "consonant";
        }
    }
    return "invalid";
}

int main() {
    char letter = get_input();

    string classification = classify_letter(letter);

    if (classification == "vowel") {
        cout << "The letter '" << letter << "' is a vowel." << endl;
    } else if (classification == "consonant") {
        cout << "The letter '" << letter << "' is a consonant." << endl;
    } else {
        cout << "Invalid input. Please enter a single alphabetic character." << endl;
    }

    return 0;
}

