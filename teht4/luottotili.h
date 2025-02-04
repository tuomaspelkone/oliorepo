#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(std::string nimi, double luotto);
    bool withdraw(double amount);
    bool deposit(double amount);
    double getLuottoraja();

protected:
    double luottoRaja;

};

#endif // LUOTTOTILI_H
