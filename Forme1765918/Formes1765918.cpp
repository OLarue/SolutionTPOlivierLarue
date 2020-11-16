#include "Formes1765918.h"
#include "Menus1765918.h"
#include <iostream>
#include <ctime>				// ou time.h

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

void dessinerRectangle(int hauteur, int largeur, int remplissages) //Pour rectangle et carr�
{
	if (remplissages == 4) 
	{
		remplissageChiffreDecroissantRectangle(hauteur, largeur); // pour faire un carr� un chiffre d'ordre d�croissant, print le compteur � sa valeur maximal et fait j-- pour le diminuer donc donne effet d�croissant.
	}
	if (remplissages == 3)
	{
		remplissageChiffreRectangle(hauteur, largeur);  // pour faire un carr� en chiffre d'ordre croissant, une petite facon de faire un carr� au lieu de print les * , on print le compteur
	}
	else
	for (int i = 0; i < largeur; i++) // for avec le i est pour la largeur ici
	{
		for (int j = 0; j < hauteur; j++) // le for avec j c'est pour sortir les charact�re et pour la hauteur
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
		cout << endl; // pour les retour � la ligne des * et des espaces ou #
	}

	

	



}

void dessinerTriangle1(int hauteur, int remplissage)
{
	for (int i = 0; i <= hauteur; i++) 
	{
		for (int j = 0; j <=i; j++) 
		{
			
				if (j == 0 || j == i || i == hauteur )
				{
					cout << "* "; 
				}
				else
				{
					if (remplissage == 2)
					{
						cout << "  ";  // j'aime mieux deux espaces c'est plus propre � mon avis
					}
					else
					{
						cout << "# ";
					}
				}
			
		}
		cout << endl;
	}
}
 
void dessinerTriangle2(int hauteur, int remplissage)
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur-i; j++) // pour avoir angle droit en haut � gauche
		{
			if (j==0/*ligne vertical*/ || i == 0 /*ligne horizontal*/ )
			{
				cout << "*";
			}
			else
			{
				cout << "  ";
			}
			
		}
		cout << endl;
	}
}

void dessinerTriangle3(int hauteur, int remplissage)
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur - i; j++) // pour avoir angle droit en haut � gauche
		{
			if (j == hauteur/*ligne vertical*/ || i == 0 /*ligne horizontal*/)
			{
				cout << "*";
			}
			else
			{
				cout << "  ";
			}

		}
		cout << endl;
	}
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
	

	cout << "Voici votre triangle " << definirRemplissageNom(choixRemplissage) << "de hauteur de " << hauteur << endl;

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

	dessinerLosange(hauteur, choixRemplissage);

	system("pause");
	system("cls");
}

void definirRemplissageNom(int choixRemplissage)
{
	if (choixRemplissage == 1)
	{
		cout << "plein ";
	}
	if (choixRemplissage == 2)
	{
		cout << "vide ";
	}
	if (choixRemplissage == 3)
	{
		cout << "ERREUR : ce choix est disponible seulement pour les carr�s et les rectangles. ";
	}
	if (choixRemplissage == 4)
	{
		cout << "ERREUR : ce choix est disponible seulement pour les carr�s et les rectangles. ";
	}

}

void definirRemplissageNomCarre(int choixRemplissage)
{
	if (choixRemplissage == 1)
	{
		cout << "plein ";
	}
	if (choixRemplissage == 2)
	{
		cout << "vide ";
	}
	if (choixRemplissage == 3)
	{
		cout << "num�rot� ";
	}
	if (choixRemplissage == 4)
	{
		cout << "num�rot� d�croissant ";
	}
}

int genererNombreAleatoire(int min, int max)
{
	int nbRandom = 0;
	min = 1; 
	max = 4;

	
	nbRandom = rand();			// rand retourne un nombre random 
	


	return nbRandom;
}