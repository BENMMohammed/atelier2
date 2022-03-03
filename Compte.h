#pragma once
class Compte
{
protected:
	static int cpt;
	int numcompte;
	char* nom;
	double solde;

public:
	Compte();
	Compte(char* nom, double solde);
	virtual bool retirerArgent(double montant);
	void deposerArgent(double montant);
	void consulterSolde() const;
	bool transfertArgent(Compte& c, double montant);
	~Compte();
};

