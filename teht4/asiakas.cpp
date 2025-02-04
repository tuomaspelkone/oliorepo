#include "asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(std::string nimi, double luottoRaja)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoRaja) {}

string Asiakas::getNimi() {
    return nimi;
}

void Asiakas::showSaldo() {
    cout << nimi << endl;
    cout << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo on "
         << luottotili.getLuottoraja() << endl;
}

bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas &kohde) {
    if (amount >= 0) {
        if (kayttotili.withdraw(amount)) {
            kohde.talletus(amount);
            cout << "Siirrettiin "
                 << amount
                 << " euroa "
                 << nimi
                 << " tililta "
                 << nimi
                 << " tilille "
                 << kohde.getNimi() << endl;
            return true;
        }
        else {
            cout << "Tililla ei ole tarpeeksi rahaa siirtoon." << endl;
            return false;
        }
        }
    else
    {
        return false;
    }
}



