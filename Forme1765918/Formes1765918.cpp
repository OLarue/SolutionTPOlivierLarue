#include "Formes1765918.h"
#include "Menus1765918.h"
#include <iostream>
#include <ctime>				// ou time.h

using namespace std;




void remplissageChiffreDecroissantRectangle(int hauteur, int largeur) // sensiblement le m�me principe ici mais en ordre d�croissant 
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

void remplissageChiffreRectangle(int hauteur, int largeur) // petit ajout ici qui est sensiblement la m�me chose que les tradionels, mais on print j,
														  // le compteur, par exemple, au lieu de print des �toiles *
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

void dessinerTriangle1(int hauteur, int remplissage) // fonction permettant de dessiner le premier rectangle demand� dans l'�nonc�
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
					if (remplissage == 2) // si c'est vide
					{
						cout << "  ";  // j'aime mieux deux espaces c'est plus propre, � mon avis. =D
					}
					else     // si c'est plein 
					{
						cout << "# ";
					}
				}
			
		}
		cout << endl; // pour retourner � la ligne et donner la forme
	}
}
 
void dessinerTriangle2(int hauteur, int remplissage) // ici il me manque simplement de mettre la ligne en angle mais je r�ussis pas � la trouver.. j'ai la ligne horizontal et vertical mais je ne trouve pas la condition pour la ligne qui rejoint les deux formants le triangle.
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur-i; j++) // pour avoir angle droit en haut � gauche. j'ai fait beaucoup d'essais erreurs et c'est � cela que je suis arriv� pour l'angle droit en haut � gauche
		{
			if (j==0/*ligne vertical*/ || i == 0 /*ligne horizontal*/  )
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
			
		}
		cout << endl;
	}
}

void dessinerTriangle3(int hauteur, int remplissage)  // j'ai essay� ici de faire diff�rentes formes de triangle mais je n'ai pas r�ussis... comme le pr�c�dent. Apr�s quelques heures d'essais je ne crois pas que je devrais mettre autant de temps simplement sur le triangle hahaha. Au moins j'aurais essay� 
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

void dessinerLosange(int hauteur, int remplissage) // comme je n'ai trouv� qu'une seule forme de triangle, il m'en manquait 3 pour faire les losanges...
{

}

void traiterRectangle(int choixRemplissage) // fonction pour traiter le rectangle, l'utilisateur y rentre les param�tres(les dimensions) et 
//											   j'apelle la fonction qui dessine la forme(rectangle pour ce traiter) ainsi qu'afficher le message indiquant les 
//											   dimensions de la forme (hauteur et largeur)
{
	
	int hauteur;
	int largeur;


	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();
	cout << "Indiquer la largeur : ";
	largeur = lireEntier();

	system("cls");

	
	cout << "Voici votre rectangle ";
	definirRemplissageNomCarre(choixRemplissage); // fonction qui permet d'afficher � l'�cran le choix de remplissage de la forme et non d'afficher le chiffre li� au choix de remplissage
	cout << " de " << hauteur << "x" << largeur << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	 system("pause");
	 system("cls");

}

void traiterCarre(int choixRemplissage) // m�me principe ici que pour le traiterRectangle
{
	
	int hauteurLargeur; // hauteurlargeur ici pour mettre la m�me valeur de hauteur et de largeur dans dessinerRectangle puisque cette fonction prend 3 
	//					param�tres, la hauteur la largeur et le choix de remplissage. La fonction dessinerRectangle est utilis� pour les carr�s puisque c'est 
	//					sensiblement la m�me chose, sauf que le carr� --> hauteur et largeur ont la m�me valeur 
	int hauteur;
	int largeur;

	cout << "Indiquer la hauteur : ";
	hauteurLargeur = lireEntier(); 

	hauteur = hauteurLargeur;
	largeur = hauteurLargeur;

	system("cls");

	cout << "voici votre carr� ";
	definirRemplissageNomCarre(choixRemplissage);  // fonction qui permet d'afficher � l'�cran le choix de remplissage de la forme et non d'afficher le chiffre li� au choix de remplissage
	cout << " de " << hauteurLargeur << " cot�s." << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	system("pause");
	system("cls");

}

void traiterTriangle(int choixRemplissage) // m�me principe ici mais pour les triangles.
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");
	

	cout << "Voici votre triangle ";
	definirRemplissageNom(choixRemplissage); // fonction qui permet d'afficher � l'�cran le choix de remplissage de la forme et non d'afficher le chiffre li� au choix de remplissage.
	cout << " de hauteur de " << hauteur << endl;

/*
	if (genererNombreAleatoire(1, 4) == 1) // comme je n'ai pas tout les triangles dessiner et pour le bon fonctionnement du programme, je vais
										  //mettre la section des if en commentaire puisque je ne vais pas g�n�rer un nombre al�atoire de 1 � 4 
										  // si je n'ai pas les 4 triangles, mais je comprends le principe ici si j'avais les 4 mod�les de triangle
	{
		dessinerTriangle1(hauteur, choixRemplissage);
	}if (genererNombreAleatoire(1, 4) == 2)
	{
		dessinerTriangle2(hauteur, choixRemplissage);
	}if (genererNombreAleatoire(1, 4) == 3)
	{
		dessinerTriangle3(hauteur, choixRemplissage);
	}if (genererNombreAleatoire(1, 4) == 4)
	{
		dessinerTriangle4(hauteur, choixRemplissage);
	}
	*/
	dessinerTriangle1(hauteur, choixRemplissage); // je met le dessinerTriangle1 ici par d�fault puisque je ne vais pas g�n�rer al�atoirement pour les
												 // causes mentionn�es plus haut.
 	system("pause");
	system("cls");
}

void traiterLosange(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();
	while (hauteur % 2 == 0) // si la hauteur entrer par l'utilisateur est pair, alors il y a erreur, la hauteur doit �tre impair. donc boucle
							// jusqu'� ce que l'utilisateur entre une valeur conforme.
	{
		cout << "ERREUR : vous devez entrer un nombre impair pour la hauteur du losange. Veuillez recommencer!" << endl;
		
		cout << "Indiquer la hauteur : ";
		hauteur = lireEntier();
	}

	system("cls");

	cout << "voici votre losange ";
	definirRemplissageNom(choixRemplissage); // fonction qui permet d'afficher � l'�cran le choix de remplissage de la forme et non d'afficher le chiffre li� au choix de remplissage
	cout << " de hauteur de " << hauteur << endl;

	dessinerLosange(hauteur, choixRemplissage);

	system("pause");
	system("cls");
}

void definirRemplissageNom(int choixRemplissage) // pour afficher le choix de remplissage dans la phrase avant de dessiner, par exemple;
												// voici votre carr� (vide) de 10x10.
{
	if (choixRemplissage == 1)
	{
		cout << "plein ";
	}
	if (choixRemplissage == 2)
	{
		cout << "vide ";
	}
	if (choixRemplissage == 3)   // ici je mentionne plein meme si le choix est num�rot� puisque cela est seulement disponible pour les carr�s 
								// et les rectangles, donc par d�fault il se fait plein.
	{
		cout << "plein, puisque le choix num�rot� est disponible seulement pour les carr�s et les rectangles. ";
	}
	if (choixRemplissage == 4)
	{
		cout << "plein, puisque le choix num�rot� est disponible seulement pour les carr�s et les rectangles. ";
	}
	
}

void definirRemplissageNomCarre(int choixRemplissage) // m�me principe ici qu'utilis� plus haut, mais pour les rectangles et les carr�s.
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

int genererNombreAleatoire(int min, int max) // source : cours de programmation, karine moreau 
											// permet de g�nerer un nombre al�atoire entre les param�tres (min, max)
{

	return rand() % (max - min + 1) + min;
}