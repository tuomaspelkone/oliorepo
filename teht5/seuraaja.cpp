#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string n) :  nimi(n), next(nullptr)  {
    cout << "Luodaan seuraaja " << n << endl;
}

string Seuraaja::getNimi() {
    return nimi;
}

void Seuraaja::paivitys(string viesti) {
    cout << "Seuraaja " << nimi << " sai viestin: " << viesti << endl;
}
