#include "Formes1765918.h"
#include "Menus1765918.h"
#include <iostream>

using namespace std;


void remplissageChiffreDecroissantRectangle(int hauteur, int largeur)
{
	for (int i = 0; i < largeur; i++)
	{
		for (int j = hauteur; j >0; j--)
		{
			cout << j;
		}
		cout << endl;
	}
}

void remplissageChiffreRectangle(int hauteur, int largeur)
{
	for (int i = 0; i < largeur; i++)
	{
		for (int j = 0; j < hauteur; j++)
		{
			cout << j + 1;
		}
		cout << endl;
	}
}

void dessinerRectangle(int hauteur, int largeur, int remplissages) //Pour rectangle et carré
{
	if (remplissages == 4)
	{
		remplissageChiffreDecroissantRectangle(hauteur, largeur);
	}
	if (remplissages == 3)
	{
		remplissageChiffreRectangle(hauteur, largeur);
	}
	else
	for (int i = 0; i < largeur; i++) // for avec le i est pour la largeur ici
	{
		for (int j = 0; j < hauteur; j++) // le for avec j c'est pour sortir les charactère et pour la hauteur
		{
			
			if (remplissages == 2)
			{


				if (i == 0 || j == 0 || i == largeur - 1 || j == hauteur - 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			else
			{
				if (remplissages == 1)
				{

				
				if (i == 0 || j == 0 || i == largeur - 1 || j == hauteur - 1)
				{
					cout << "* ";
				}else
					{
						cout << "# ";
					}
				}
			}
		}
		cout << endl;
	}

	

	



}

void dessinerTriangle1(int hauteur, int remplissage)
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			if (i == 0 || j == 0 || i == hauteur )
			{
				cout << "* ";
			}
			
		}
		cout << endl;
	}
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
	int hauteur;
	int largeur;

	cout << "Indiquer la hauteur : ";
	hauteurLargeur = lireEntier();

	hauteur = hauteurLargeur;
	largeur = hauteurLargeur;

	system("cls");

	cout << "voici votre carre de " << hauteurLargeur << " cotes." << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	system("pause");
	system("cls");

}

void traiterTriangle(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");

	cout << "Voici votre triangle de hauteur de " << hauteur << endl;

	dessinerTriangle1(hauteur, choixRemplissage);
	system("pause");
	system("cls");
}

void traiterLosange(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");

	cout << "voici votre losange de hauteur de " << hauteur << endl;

	// dessinerLosange();

	system("pause");
	system("cls");
}

int genererNombreAleatoire(int min, int max)
{
	int nbRandom = 0;


	return nbRandom;
}