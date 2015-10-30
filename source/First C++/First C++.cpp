// First C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>



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

		if ((guessedLetter.length() > 1) || (guessedLetter.length() < 1)) {
			std::cout << "You can only guess one letter at a time." << std::endl;
		}
		else {
			/*BUG: You can guess the same letter twice*/
			guessesMade[amountOfGuesses] = guessedLetter;
			amountOfGuesses = amountOfGuesses + 1;
		
	
			PrintPreviousGuesses(amountOfGuesses, guessesMade);
	}
	}


	std::cout << "GAME OVER. YOU LOST.";

    return 0;
}


