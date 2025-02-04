#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>
class Pankkitili
{
public:
    Pankkitili(std::string nimi);
    double getBalance();
    bool deposit(double);
    virtual bool withdraw(double);
protected:
    std::string omistaja;
    double saldo;
};

#endif // PANKKITILI_H

