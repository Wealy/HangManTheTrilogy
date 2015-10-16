// First C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

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

	/* This is a comment */
	for (int i = 1; i <= 15; i = i + 1)
	{
		std::cout << "Hello, the current value of 'i' is = " << i << std::endl;
	}

	while (amountOfGuesses < guessesAllowed) {
		std::cout << "Guess a letter in the word by typing in the console." << std::endl;
		std::cout << "You have guessed " << amountOfGuesses << " times." << std::endl;
		std::cout << "You have " << guessesAllowed << " guesses." << std::endl;
		std::string guessedLetter;
		std::cin >> guessedLetter;

		guessesMade[amountOfGuesses] = guessedLetter;
		amountOfGuesses = amountOfGuesses + 1;
	}

    return 0;
}

