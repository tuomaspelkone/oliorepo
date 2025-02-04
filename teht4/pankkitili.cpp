#include "pankkitili.h"
#include <iostream>
using namespace std;


Pankkitili::Pankkitili(string nimi) : omistaja(nimi), saldo(0) {
    cout << "Pankkitili luotu "
         << nimi
         << ":lle." << endl;
}

double Pankkitili::getBalance() {
    cout << "Kayttotilin saldo on ";
    return saldo;
}

bool Pankkitili::deposit(double amount) {
    if (amount > 0) {
        saldo += amount;
        cout << "Talletus "
             << amount
             << " on tehty kayttotilille." << endl;
        return true;
    }
    else {
        return false;
    }
}

bool Pankkitili::withdraw(double amount) {
    if (amount > 0 && saldo >= amount) {
        saldo -= amount;
        cout << "Kayttotililta on nostettu "
             << amount << endl;
        return true;
    }
    else {
        return false;
    }
}

