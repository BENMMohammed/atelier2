#pragma once
#include <stdio.h>
#include <string>
#include "Compte.h"
class CompteCourant : public Compte
{
private:
    double decouvert;

public:
    CompteCourant(char* nom, double solde, double decouvert);
    CompteCourant();
    bool retirerArgent(double montant) override;
    ~CompteCourant();
}