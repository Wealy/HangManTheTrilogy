// First C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	int amountOfGuesses;
	amountOfGuesses = 0;
	int guessesAllowed = 5;
	std::string word;
	word = "couch";
	int lengthOfWord;
	lengthOfWord = word.length();

	int* numbers;
	numbers = new int[100];
	numbers[1] = 54;

	std::string* guessesMade;
	guessesMade = new string[]

	while (amountOfGuesses < guessesAllowed) {
		std::cout << "Guess a letter in the word by typing in the console." << std::endl;
		std::cout << "You have guessed " << amountOfGuesses << " times." << std::endl;
		std::cout << "You have " << guessesAllowed << " guesses." << std::endl;
		std::string guessedLetter;
		std::cin >> guessedLetter;

	}

    return 0;
}

