#include"Password.h"
Password::Password() {

}
void Password::generate(int length, string chosenCharset) {//The workhorse member that does everything.
	setLength(length);
	setCharset(chosenCharset);
	for (int i = 0; i < length; i++) {//for each space in password length
		word += getRandomChar();
	}
}
string Password::getWord() const {//returns the finished password.
	return word;
}
char Password::getRandomChar() {//returns a cryptographically random character.
	if (chosenCharset == "/A") {
		usedChars = numbersString + symbolsString + lettersString;
	}
	else if (chosenCharset == "/L") {
		usedChars = lettersString;
	}
	else if (chosenCharset == "/NS") {
		usedChars = numbersString + lettersString;
	}
	else if (chosenCharset == "/NN") {
		usedChars = symbolsString + lettersString;
	}
	else if (chosenCharset == "/NL") {
		usedChars = numbersString + symbolsString;
	}
	return usedChars[rand() % usedChars.length()];
}
void Password::setLength(int length) {
	this->length = length;
}
void Password::setCharset(string chosenCharset) {
	this->chosenCharset = chosenCharset;
}