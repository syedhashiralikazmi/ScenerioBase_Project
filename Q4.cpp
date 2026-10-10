#include<iostream>
using namespace std;

int main() {

	char upperCaseLetter;
	int shiftValue; // the value given between the range 1 to 5 to shift ASCII value ascii+shiftValue

	cout << "Enter upper case letter (e.g: A): ";
	cin >> upperCaseLetter;
	if (!isupper(upperCaseLetter)) {
		cout << "Error: Please enter a valid UPPERCASE letter.\n";
		return 1;
	}

	cout << "Enter a shift key (integer between 1 and 5):";
	cin >> shiftValue;
	
	if (shiftValue < 1 || shiftValue > 5) {
		cout << "Error: Shift key must be between 1 and 5.\n";
		return 1; 
	}

	char encryptedASCII = upperCaseLetter + shiftValue;	
	
	cout << "Original Character  : " << upperCaseLetter << " | ASCII: " << static_cast<int>(upperCaseLetter) << endl;
	cout << "Encrypted Character : " << encryptedASCII << " | ASCII: " << static_cast<int>(encryptedASCII) << endl;
    return 0;
}