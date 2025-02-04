#include "luottotili.h"
#include <iostream>
using namespace std;


Luottotili::Luottotili(std::string nimi, double luotto)
    : Pankkitili(nimi), luottoRaja(luotto) {
    cout << "Luottotili luotu "
         << nimi
         << ":lle, luottoraja "
         << luottoRaja << endl;
}

/*bool Luottotili::withdraw(double amount) {
    if (amount > 0 && (saldo + luottoRaja) >= amount) {
        luottoRaja -= amount;
        cout << "Nosto "
             << amount
             << " tehty, luottoa jaljella "
             << luottoRaja << endl;
        return true;
    }
    else {
        cout << "Ei tarpeeksi luottoa" << endl;
    return false;
    }
}

bool Luottotili::deposit(double amount) {
    if (amount > 0) {
        luottoRaja += amount;
        cout << "Luottoa maksettu "
             << amount
             << " takaisin. Luottoa jaljella "
             << luottoRaja
             << endl;
        return true;
    }
    else {
        return false;
    }
}
*/

bool Luottotili::withdraw(double amount) {
    if (amount > 0 && (saldo + luottoRaja) >= amount) {
        saldo -= amount;
        cout << "Nosto " << amount << " tehty, uusi saldo: " << saldo << endl;
        return true;
    }
    else {
        cout << "Ei tarpeeksi luottoa" << endl;
        return false;
    }
}

bool Luottotili::deposit(double amount) {
    if (amount > 0) {
        saldo += amount;
        cout << "Talletus " << amount << " tehty, uusi saldo: " << saldo << endl;
        return true;
    }
    else {
        return false;
    }
}

double Luottotili::getLuottoraja() {
    return saldo;
}
