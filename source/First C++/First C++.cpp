// First C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

bool checkIfGuessedTwice(int amountOfGuesses, std::string guessedLetter, std::string* guessesMade) {
	bool guessedTheSameLetterTwice = false;
	for (int i = 0; i < amountOfGuesses; i = i + 1) {
		if (guessesMade[i] == guessedLetter) {
			guessedTheSameLetterTwice = true;
		}
	}

	return guessedTheSameLetterTwice;
}
 // This is my attmept to fix that you can guess a number
/*
bool checkIfGuessedALetter(std::string guessedLetter) {
	std::string a = "a";
	std::string b = "b";
	std::string c = "c";
	std::string d = "d";
	std::string e = "e";
	std::string f = "f";
	std::string g = "g";
	std::string h = "h";
	std::string i = "i";
	std::string j = "j";
	std::string k = "k";
	std::string l = "l";
	std::string m = "m";
	std::string n = "n";
	std::string o = "o";
	std::string p = "p";
	std::string q = "q";
	std::string r = "r";
	std::string s = "s";
	std::string t = "t";
	std::string u = "u";
	std::string v = "v";
	std::string w = "w";
	std::string x = "x";
	std::string y = "y";
	std::string z = "z";
	std::string lettersAllowedToGuess;
	lettersAllowedToGuess = a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	if (guessedLetter != lettersAllowedToGuess) std::cout << "You can only guess Letters" << std::endl;
	if (guessedLetter != lettersAllowedToGuess) bool checkIfGuessedALetter = false; else {
		bool checkIfGuessedALetter = true;
	}
	return checkIfGuessedALetter;
};
*/

int PrintAmountOfGuessesMade(int amountOfGuesses, int guessesAllowed) {
	if (amountOfGuesses == 1) {
		std::cout << "You have guessed " << amountOfGuesses << " time." << std::endl;
	}
	else {
		std::cout << "You have guessed " << amountOfGuesses << " times." << std::endl;
	}

	if ((guessesAllowed - amountOfGuesses) == 1) {
		std::cout << "You have " << (guessesAllowed - amountOfGuesses) << " guess." << std::endl;
	}
	else {
		std::cout << "You have " << (guessesAllowed - amountOfGuesses) << " guesses." << std::endl;
	}
	return 0;
	
}

int PrintCorrectlyGuessedLetters(std::string word, std::string* guessedLetters, int amountOfGuesses){
	for (int i = 1; i <= word.length(); i = i + 1) {
		std::cout << "_ ";
	}
	std::cout << std::endl;
	return 0;
}


int PrintPreviousGuesses(int amountOfGuesses, std::string* guessesMade) {
	for (int i = 0; i < amountOfGuesses; i = i + 1) {

		if (i == 0) {
			std::cout << "This is what you guessed: " << guessesMade[i];

		}
		else {
			std::cout << ", " << guessesMade[i];
		}
	}
	std::cout << std::endl;
	return 0;
}
 
int main()
{
	int amountOfGuesses;
	amountOfGuesses = 0;
	int guessesAllowed = 6;
	std::string word;
	word = "couch";
	int lengthOfWord;
	lengthOfWord = word.length();

	std::string* guessesMade;
	guessesMade = new std::string[26];


	while (amountOfGuesses < guessesAllowed) {
		std::cout << "Guess a letter in the word by typing in the console." << std::endl;

		PrintAmountOfGuessesMade(amountOfGuesses, guessesAllowed);

		std::string guessedLetter;
		std::cin >> guessedLetter;

		/* my attempt at calling it

		bool checkIFGuessedALetter;
		*/
		bool guessedTheSameLetterTwice;
		guessedTheSameLetterTwice = checkIfGuessedTwice(amountOfGuesses, guessedLetter, guessesMade);

		
		if (guessedTheSameLetterTwice == true) {
			std::cout << "You already guessed that." << std::endl;
			continue;
		}


		if ((guessedLetter.length() > 1) || (guessedLetter.length() < 1)) {
			std::cout << "You can only guess one letter at a time." << std::endl;
		}
		else {
			guessesMade[amountOfGuesses] = guessedLetter;
			amountOfGuesses = amountOfGuesses + 1;


			PrintPreviousGuesses(amountOfGuesses, guessesMade);
		}
	}


	std::cout << "GAME OVER. YOU LOST.";

	return 0;
}


