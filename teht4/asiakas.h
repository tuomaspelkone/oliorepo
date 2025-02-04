#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"


class Asiakas
{
public:
    Asiakas(std::string nimi,double luottoRaja);
    std::string getNimi();
    void showSaldo();
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
    bool tiliSiirto(double amount, Asiakas &kohde);

private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
