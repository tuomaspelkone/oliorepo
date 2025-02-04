#include <iostream>
#include "Pankkitili.h"
#include "Luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas teme("Teme", 200);
    Asiakas kale("Kale", 1000);
    teme.talletus(200);
    teme.nosto(50);
    teme.luotonNosto(150);
    teme.luotonMaksu(100);

    kale.talletus(500);
    kale.tiliSiirto(350, teme);

    teme.showSaldo();
    kale.showSaldo();
}
