#pragma once
#include <stdio.h>
#include <string>
#include "Compteepargne.h"

    CompteEpargne::CompteEpargne(char* nom, double solde, double TauxInteret)
        : Compte(nom, solde)
    {
        this->tauxInteret = TauxInteret;
    }

    CompteEpargne::CompteEpargne()
    {
    }

    void CompteEpargne::AjouterInterets()
    {
        this->interets = this->solde * tauxInteret;
        this->solde = this->solde + interets;
    }

    CompteEpargne::~CompteEpargne()
    {
    }
