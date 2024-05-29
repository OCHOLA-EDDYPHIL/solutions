#include <iostream>
#include <string>
#include <cctype> // for isspace() and tolower()
using namespace std;

bool palindrome(const string &input){
	//remove the spaces and convert the string to lowercase
	string word;
	for (size_t i = 0; i < input.length(); ++i) {
	    char c = input[i];
    	if (!isspace(c)) {
        	word += tolower(c);
    	}
	}
    //reversing the cleaned word
    string reversed;
    for (int i = word.length() -1; i>=0; --i){
    	reversed += word[i];
	}
    return word == reversed;
}

int main(){
	string userInput;
    cout << "Enter a palindrome: ";
    getline(cin, userInput);

	if (palindrome(userInput)){
		cout<< "True"<<endl;
	}else {
		cout<< "False"<<endl;
	}

	return 0;
}
