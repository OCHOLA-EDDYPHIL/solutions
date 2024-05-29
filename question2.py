"""A palindrome is a string that reads the same when reversed. For example, Mum, Dad and 101. Write a simple function
that will return True if the parameter is a palindrome. The parameter might be a string made of words.
"""


def palindrome(words):
    word = ''.join(words.split()).lower()
    return word == word[::-1]


user_input = input("Enter a palindrome: ")
print(palindrome(user_input))
