#include "Formes1765918.h"
#include "Menus1765918.h"
#include <iostream>

using namespace std;


void dessinerRectangle(int hauteur, int largeur, int remplissages) //Pour rectangle et carré
{
	for (int i = 0; i < largeur; i++) // for avec le i est pour la largeur ici
	{
		for (int j = 0; j < hauteur; j++) // le for avec j c'est pour sortir les charactère et pour la hauteur
		{
			if (remplissages == 2)
			{ 
				if (i == 0 && j <= hauteur)
				{
					cout << "*";

				}
				if (j == 0 && i <= largeur)
				{
					cout << "*";
				} 





			}
		}
		cout << endl;
	}

	

	



}

void dessinerTriangle1(int hauteur, int remplissage)
{
}

void dessinerTriangle2(int hauteur, int remplissage)
{
}

void dessinerTriangle3(int hauteur, int remplissage)
{
}

void dessinerTriangle4(int hauteur, int remplissage)
{
}

void dessinerLosange(int hauteur, int remplissage)
{
}

void traiterRectangle(int choixRemplissage)
{
	int hauteur;
	int largeur;


	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();
	cout << "Indiquer la largeur : ";
	largeur = lireEntier();

	system("cls");


	cout << "Voici votre rectangle de " << hauteur << "x" << largeur << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	 system("pause");
	 system("cls");

}

void traiterCarre(int choixRemplissage)
{
	int hauteurLargeur;

	cout << "Indiquer la hauteur : ";
	hauteurLargeur = lireEntier();

	system("cls");

	cout << "voici votre carre " << "de " << hauteurLargeur << " cotes." << endl;

	// dessinerRectangle();

	system("pause");
}

void traiterTriangle(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");

	cout << "Voici votre triangle " << " de hauteur de " << hauteur << endl;

	//dessinerTriangle1();

}

void traiterLosange(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");

	cout << "voici votre losange" << " de hauteur de " << hauteur << endl;

	// dessinerLosange();
}

int genererNombreAleatoire(int min, int max)
{
	int nbRandom = 0;


	return nbRandom;
}