#include "Jeu.h"
#include "De.h"
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	Jeu jeuUtilisateur;
	Jeu jeuOrdinateur;
	int faceDe = 6;

	jeuUtilisateur.de1.lancerDe(faceDe);
	jeuUtilisateur.de2.lancerDe(faceDe);
	jeuUtilisateur.de3.lancerDe(faceDe);
	jeuUtilisateur.combinaisonObtenue = jeuUtilisateur.de1.nbDe + jeuUtilisateur.de2.nbDe + jeuUtilisateur.de3.nbDe;
	cout << "De 1 Utilisateur : " << jeuUtilisateur.de1.nbDe << endl;
	cout << "De 2 Utilisateur : " << jeuUtilisateur.de2.nbDe << endl;
	cout << "De 3 Utilisateur : " << jeuUtilisateur.de3.nbDe << endl;
	cout << "Combinaison obtenue Utilisateur : " << jeuUtilisateur.combinaisonObtenue << endl;

	jeuOrdinateur.de1.lancerDe(faceDe);
	jeuOrdinateur.de2.lancerDe(faceDe);
	jeuOrdinateur.de3.lancerDe(faceDe);
	jeuOrdinateur.combinaisonObtenue = jeuOrdinateur.de1.nbDe + jeuOrdinateur.de2.nbDe + jeuOrdinateur.de3.nbDe;
	cout << "De 1 Utilisateur : " << jeuOrdinateur.de1.nbDe << endl;
	cout << "De 2 Utilisateur : " << jeuOrdinateur.de2.nbDe << endl;
	cout << "De 3 Utilisateur : " << jeuOrdinateur.de3.nbDe << endl;
	cout << "Combinaison obtenue Ordinateur : " << jeuOrdinateur.combinaisonObtenue << endl;

	if (jeuOrdinateur.combinaisonObtenue > jeuUtilisateur.combinaisonObtenue)
	{
		cout << "L'ordinateur a gagne !" << endl;
	}
	else if (jeuOrdinateur.combinaisonObtenue < jeuUtilisateur.combinaisonObtenue)
	{
		cout << "L'utilisateur a gagne !" << endl;
	}
	else
	{
		cout << "Egalite !" << endl;
	}

	
	return 0;
}