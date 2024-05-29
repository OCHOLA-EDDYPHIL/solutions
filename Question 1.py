def get_input():
    # Getting a letter input from the user
    letter = input("Please enter a letter: ").strip().lower()
    return letter


def is_vowel(letter):
    vowels = "aeiouAEIOU"
    return letter in vowels


def is_consonant(letter):
    return letter.isalpha() and len(letter) == 1 and not is_vowel(letter)


def classify_letter(letter):
    # checking vowels or consonants
    if len(letter) == 1 and letter.isalpha():  # Ensure the input is a single alphabetic character
        if is_vowel(letter):
            return "vowel"
        elif is_consonant(letter):
            return "consonant"
    return "invalid"


def main():
    letter = get_input()

    classification = classify_letter(letter)

    if classification == "vowel":
        print(f"The letter '{letter}' is a vowel.")
    elif classification == "consonant":
        print(f"The letter '{letter}' is a consonant.")
    else:
        print("Invalid input. Please enter a single alphabetic character.")


if __name__ == "__main__":
    main()
