#pragma once
#include "Compte.h"
#include <iostream>
#include <stdio.h>
#include <string>
class CompteEpargne : public Compte
{
private:
    double tauxInteret;
    double interets;
public:
    CompteEpargne(char* nom, double solde, double TauxInteret);
    CompteEpargne();
    void AjouterInterets();

    ~CompteEpargne();
}