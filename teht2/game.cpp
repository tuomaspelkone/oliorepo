#include "game.h"
#include <ctime>
#include <iostream>

using namespace std;


Game::Game(int maxNumber) : playerGuess(0), numOfGuesses(0), maxNumber(maxNumber) {
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: Initialized game as "
         << maxNumber
         <<" a maximum value"
         << endl;
    play();
}

Game::~Game() {
    cout << "GAME DESTRUCTOR: Object cleared from stack memory" << endl;
}


void Game::play() {

    cout << "Guess a number!" << endl;
    cin  >> playerGuess;

    while (playerGuess != randomNumber) {
        numOfGuesses++;

        if (playerGuess <= 0 || playerGuess > maxNumber) {
            cout << "The number you guess must be between 1 and " << maxNumber << endl;
        }
        else if (randomNumber < playerGuess) {
            cout << "Your guess was too high." << endl;
        }
        else if (randomNumber > playerGuess) {
            cout << "Your guess was too small." << endl;
        }

        cout << "Guess again!" << endl;
        cin >> playerGuess;
    }

    printGameResult();
}


void Game::printGameResult() {
        cout << "Your guess was correct!" << endl;
        cout << "Your guessed " << numOfGuesses << " times!" << endl;
    }
