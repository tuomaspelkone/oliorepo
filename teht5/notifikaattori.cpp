#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() : seuraajat(nullptr) {}

void Notifikaattori::lisaa(Seuraaja* seuraaja) {
    seuraaja->next = seuraajat;
    seuraajat = seuraaja;
}

void Notifikaattori::poista(Seuraaja* seuraaja) {
    if (seuraajat == nullptr || seuraaja == nullptr) return;

    if (seuraajat == seuraaja) {
        seuraajat = seuraajat->next;
        delete seuraaja;
        return;
    }

    Seuraaja* edellinen = seuraajat;
    while (edellinen->next != nullptr && edellinen->next != seuraaja) {
        edellinen = edellinen->next;
    }

    if (edellinen->next == seuraaja) {
        edellinen->next = seuraaja->next;
        delete seuraaja;
    }
}

void Notifikaattori::tulosta() {
    cout << "Seuraajat:" << endl;
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        cout << current->getNimi() << endl;
        current = current->next;
    }
}

void Notifikaattori::postita(string viesti) {
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(viesti);
        current = current->next;
    }
}
