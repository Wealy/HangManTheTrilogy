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


	while (amountOfGuesses < guessesAllowed) {
		std::cout << "Guess a letter in the word by typing in the console." << std::endl;
		std::cout << "You have guessed " << amountOfGuesses << " times." << std::endl;
		std::cout << "You have " << guessesAllowed << " guesses." << std::endl;
		std::string guessedLetter;
		std::cin >> guessedLetter;

		if ((guessedLetter.length() > 1) || (guessedLetter.length() < 1)) {
			std::cout << "You can only guess one letter at a time." << std::endl;
		}
		else {
			/*BUG: You can guess the same letter twice*/
			guessesMade[amountOfGuesses] = guessedLetter;
			amountOfGuesses = amountOfGuesses + 1;



			for (int i = 0; i < amountOfGuesses; i = i + 1) {

				if (i == 0) {
					std::cout << "This is what you guessed: " << guessesMade[i];
				}
				else {
					std::cout << ", " << guessesMade[i];
				}
			}
			std::cout << std::endl;
		}



	}


	std::cout << "GAME OVER. YOU LOST.";

    return 0;
}

