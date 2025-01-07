#include <iostream>

using namespace std;

int scale;

int game(int maxnum)                //maxnum = arvottavien skaala yhdestä maxnumiin
{
    srand(18);                      //arvausten määrä
    int rng = rand() % maxnum;      //satunnaisluku
    rng += 1;
    cout << "Guess a number!" << endl;
    int guesscount = 1;
    int guess = 0;


    cin  >> guess;

    while (guess != rng) {

        guesscount++;

        if (rng < guess && guess <= maxnum) {
            cout << "Your guess was too high." << endl;
        }
        else if (rng > guess && guess > 0) {
            cout << "Your guess was too small." << endl;
        }
        else if (rng == guess) {
            cout << "Your guess was correct!" << endl;
        }
        else {
            cout << "The number you guess must be between 1-20" << endl;
        }

        cout << "Guess again!" << endl;
        cin >> guess;

    }

    cout << "Your guess was correct!" << endl;

    return guesscount;
}

int main()
{
    cout << "Input your game's number scale (1 - x): " << endl;
    cout << "x = " << endl;
    cin >> scale;
    int score = game(scale);
    cout << "Your guessed " << score << " times!" << endl;
}
