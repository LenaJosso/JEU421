#include "Jeu.h"
#include <iostream>
using namespace std;

int main()
{
	int nbEntree;
	int nbMin = 0;
	int nbMax;
	cout << "Entrez le num max : ";
	cin >> nbMax;
	cout << "Vous avez entre : " << nbMax << endl;
	int nbOrdinateur = rand() % nbMax + 1;
	do {
		cout << "Choisissez un nombre entre " << nbMin << " et " << nbMax << endl;
		cin >> nbEntree;
		if (nbEntree == nbOrdinateur)
		{
			cout << "Bravo ! Vous avez trouve le nombre de l'ordinateur : " << nbOrdinateur << endl;
		}
		else if (nbEntree < nbOrdinateur)
		{
			cout << "Le nombre de l'ordinateur est plus grand que " << nbEntree << endl;
		}
		else
		{
			cout << "Le nombre de l'ordinateur est plus petit que " << nbEntree << endl;
		}
	} while (nbEntree != nbOrdinateur);
	return 0;
}