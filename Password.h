#pragma once
#include<string>
#include<iostream>
using namespace std;
class Password {
private:
	string chosenCharset = "/A";
	string numbersString = "0123456789";
	string symbolsString = "!@#$%^&*-_/\.,?+";
	string lettersString = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	string word;
	string usedChars;
	int length;
	char getRandomChar();//returns a cryptographically random character.
	void setLength(int length);
	void setCharset(string chosenCharset);
public:
	Password();
	void generate(int length, string chosenCharset);//The workhorse member that does everything.
	string getWord() const;//returns the finished password.
};