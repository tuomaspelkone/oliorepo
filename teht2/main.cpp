#include <iostream>
#include "game.h"

using namespace std;

int scale;

int main()
{
    cout << "Input your game's number scale (1 - x): " << endl;
    cout << "x = " << endl;
    cin >> scale;
    Game game(scale);
    return 0;
}
