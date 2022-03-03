#include "Compte.h"
#include<iostream>
using namespace std;
int Compte::cpt = 0;

Compte::Compte()
{
    this->numcompte = Compte::cpt++;
    this->solde = 0;
    this->nom = new char[20];
}

Compte::Compte(char* nom, double solde)
{
    this->numcompte = Compte::cpt++;
    this->solde = solde;
    this->nom = new char[20];
    this->nom = nom;

}

bool Compte::retirerArgent(double montant)
{
    if (this->solde >= montant) {
        this->solde = this->solde - montant;
        return true;
    }
    else
        return false;
}

void Compte::deposerArgent(double montant)
{
    this->solde = this->solde + montant;
}

void Compte::consulterSolde() const
{
    cout << "Votre numero de compte est: " << this->numcompte << endl;
    cout << "Votre solde est de: " << this->solde << endl;

}

bool Compte::transfertArgent(Compte& c, double montant)
{
    bool res = this->retirerArgent(montant);

    if (res == true)
    {
        c.deposerArgent(montant);
        return true;
    }
    else
        return false;
}


Compte::~Compte()
{
    delete[] this->nom;
    this->nom = 0;
}


