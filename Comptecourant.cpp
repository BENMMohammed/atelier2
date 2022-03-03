#include"Comptecourant.h"
#include"Compte.h"
#include<string.h>
    

    CompteCourant::CompteCourant(char* nom, double solde, double decouvert)
        : Compte(nom, solde)
    {
        this->decouvert = decouvert;
    }

    CompteCourant::CompteCourant()
    {
    }

    bool CompteCourant::retirerArgent(double montant)
    {
        if (this->solde - montant >= decouvert){
            this->solde -= montant;
            return true;
        }
        else
            return false;
    }

    CompteCourant::~CompteCourant()
    {
    }
