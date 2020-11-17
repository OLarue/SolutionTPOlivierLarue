#include "Formes1765918.h"
#include "Menus1765918.h"
#include <iostream>
#include <ctime>				// ou time.h

using namespace std;




void remplissageChiffreDecroissantRectangle(int hauteur, int largeur) // sensiblement le même principe ici mais en ordre décroissant 
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

void remplissageChiffreRectangle(int hauteur, int largeur) // petit ajout ici qui est sensiblement la même chose que les tradionels, mais on print j,
														  // le compteur, par exemple, au lieu de print des étoiles *
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
		remplissageChiffreDecroissantRectangle(hauteur, largeur); // pour faire un carré un chiffre d'ordre décroissant, print le compteur à sa valeur maximal et fait j-- pour le diminuer donc donne effet décroissant.
	}
	if (remplissages == 3)
	{
		remplissageChiffreRectangle(hauteur, largeur);  // pour faire un carré en chiffre d'ordre croissant, une petite facon de faire un carré au lieu de print les * , on print le compteur
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
		cout << endl; // pour les retour à la ligne des * et des espaces ou #
	}

	

	



}

void dessinerTriangle1(int hauteur, int remplissage) // fonction permettant de dessiner le premier rectangle demandé dans l'énoncé
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
						cout << "  ";  // j'aime mieux deux espaces c'est plus propre, à mon avis. =D
					}
					else     // si c'est plein 
					{
						cout << "# ";
					}
				}
			
		}
		cout << endl; // pour retourner à la ligne et donner la forme
	}
}
 
void dessinerTriangle2(int hauteur, int remplissage) // ici il me manque simplement de mettre la ligne en angle mais je réussis pas à la trouver.. j'ai la ligne horizontal et vertical mais je ne trouve pas la condition pour la ligne qui rejoint les deux formants le triangle.
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur-i; j++) // pour avoir angle droit en haut à gauche. j'ai fait beaucoup d'essais erreurs et c'est à cela que je suis arrivé pour l'angle droit en haut à gauche
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

void dessinerTriangle3(int hauteur, int remplissage)  // j'ai essayé ici de faire différentes formes de triangle mais je n'ai pas réussis... comme le précédent. Après quelques heures d'essais je ne crois pas que je devrais mettre autant de temps simplement sur le triangle hahaha. Au moins j'aurais essayé 
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur - i; j++) // pour avoir angle droit en haut à gauche
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

void dessinerLosange(int hauteur, int remplissage) // comme je n'ai trouvé qu'une seule forme de triangle, il m'en manquait 3 pour faire les losanges...
{

}

void traiterRectangle(int choixRemplissage) // fonction pour traiter le rectangle, l'utilisateur y rentre les paramètres(les dimensions) et 
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
	definirRemplissageNomCarre(choixRemplissage); // fonction qui permet d'afficher à l'écran le choix de remplissage de la forme et non d'afficher le chiffre lié au choix de remplissage
	cout << " de " << hauteur << "x" << largeur << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	 system("pause");
	 system("cls");

}

void traiterCarre(int choixRemplissage) // même principe ici que pour le traiterRectangle
{
	
	int hauteurLargeur; // hauteurlargeur ici pour mettre la même valeur de hauteur et de largeur dans dessinerRectangle puisque cette fonction prend 3 
	//					paramètres, la hauteur la largeur et le choix de remplissage. La fonction dessinerRectangle est utilisé pour les carrés puisque c'est 
	//					sensiblement la même chose, sauf que le carré --> hauteur et largeur ont la même valeur 
	int hauteur;
	int largeur;

	cout << "Indiquer la hauteur : ";
	hauteurLargeur = lireEntier(); 

	hauteur = hauteurLargeur;
	largeur = hauteurLargeur;

	system("cls");

	cout << "voici votre carré ";
	definirRemplissageNomCarre(choixRemplissage);  // fonction qui permet d'afficher à l'écran le choix de remplissage de la forme et non d'afficher le chiffre lié au choix de remplissage
	cout << " de " << hauteurLargeur << " cotés." << endl;

	 dessinerRectangle(hauteur, largeur, choixRemplissage);

	system("pause");
	system("cls");

}

void traiterTriangle(int choixRemplissage) // même principe ici mais pour les triangles.
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();

	system("cls");
	

	cout << "Voici votre triangle ";
	definirRemplissageNom(choixRemplissage); // fonction qui permet d'afficher à l'écran le choix de remplissage de la forme et non d'afficher le chiffre lié au choix de remplissage.
	cout << " de hauteur de " << hauteur << endl;

/*
	if (genererNombreAleatoire(1, 4) == 1) // comme je n'ai pas tout les triangles dessiner et pour le bon fonctionnement du programme, je vais
										  //mettre la section des if en commentaire puisque je ne vais pas générer un nombre aléatoire de 1 à 4 
										  // si je n'ai pas les 4 triangles, mais je comprends le principe ici si j'avais les 4 modèles de triangle
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
	dessinerTriangle1(hauteur, choixRemplissage); // je met le dessinerTriangle1 ici par défault puisque je ne vais pas générer aléatoirement pour les
												 // causes mentionnées plus haut.
 	system("pause");
	system("cls");
}

void traiterLosange(int choixRemplissage)
{
	int hauteur;
	cout << "Indiquer la hauteur : ";
	hauteur = lireEntier();
	while (hauteur % 2 == 0) // si la hauteur entrer par l'utilisateur est pair, alors il y a erreur, la hauteur doit être impair. donc boucle
							// jusqu'à ce que l'utilisateur entre une valeur conforme.
	{
		cout << "ERREUR : vous devez entrer un nombre impair pour la hauteur du losange. Veuillez recommencer!" << endl;
		
		cout << "Indiquer la hauteur : ";
		hauteur = lireEntier();
	}

	system("cls");

	cout << "voici votre losange ";
	definirRemplissageNom(choixRemplissage); // fonction qui permet d'afficher à l'écran le choix de remplissage de la forme et non d'afficher le chiffre lié au choix de remplissage
	cout << " de hauteur de " << hauteur << endl;

	dessinerLosange(hauteur, choixRemplissage);

	system("pause");
	system("cls");
}

void definirRemplissageNom(int choixRemplissage) // pour afficher le choix de remplissage dans la phrase avant de dessiner, par exemple;
												// voici votre carré (vide) de 10x10.
{
	if (choixRemplissage == 1)
	{
		cout << "plein ";
	}
	if (choixRemplissage == 2)
	{
		cout << "vide ";
	}
	if (choixRemplissage == 3)   // ici je mentionne plein meme si le choix est numéroté puisque cela est seulement disponible pour les carrés 
								// et les rectangles, donc par défault il se fait plein.
	{
		cout << "plein, puisque le choix numéroté est disponible seulement pour les carrés et les rectangles. ";
	}
	if (choixRemplissage == 4)
	{
		cout << "plein, puisque le choix numéroté est disponible seulement pour les carrés et les rectangles. ";
	}
	
}

void definirRemplissageNomCarre(int choixRemplissage) // même principe ici qu'utilisé plus haut, mais pour les rectangles et les carrés.
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
		cout << "numéroté ";
	}
	if (choixRemplissage == 4)
	{
		cout << "numéroté décroissant ";
	}
	
}

int genererNombreAleatoire(int min, int max) // source : cours de programmation, karine moreau 
											// permet de génerer un nombre aléatoire entre les paramètres (min, max)
{

	return rand() % (max - min + 1) + min;
}