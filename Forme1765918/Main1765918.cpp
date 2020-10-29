// But :	   Programme qui dessine des formes aux dimensions diverses, pleines ou vides, selon les choix que l'utilisateur fait dans les menus	   
// Auteur :	   Karine Moreau
// Modifié par : Olivier Larue
// Date :      6 Octobre 2020
// Date de modification : 


#include <iostream>		// Bibliothèque qui fournit des fonctions pour permettre la communication entre le programme et l'utilisateur
#include <time.h>		// Bibliothèque qui fournit des fonctions basées sur les dates et heures
#include "Menus1765918.h"		// Bibliothèque du programmeur rassemblant les fonctions permettant la gestion des menus et la validation des choix fait dans ces menus
#include "Formes1765918.h"		// Bibliothèque du programmeur offrant des fonctions permettant de dessiner différentes formes, pleines ou vides
using namespace std;

int main()
{
   // Définition des constantes 
   const int QUITTER   = 5;     // Le choix maximum dans le menu 1. Pourrait changer si le programmeur ajoute une forme suppplémentaire
   const int RETOUR	   = 3;     // Le choix maximum dans le menu 2. Pourrait changer si le programmeur ajoute une option suppplémentaire

   const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
   const int TRIANGLE  = 2;
   const int CARRE     = 3;
   const int LOSANGE   = 4;

	// Définition des variables	
	int choixForme;
	int choixRemplissage;

	srand(time(NULL));	            // Permet d'initialiser le random seed
	setlocale(LC_ALL,"");            // Permet de gérer les caractères accentués

   // Afficher le menu des formes et lire un choix valide 
	choixForme = validerMenu(1 /* choix du menu des formes */, QUITTER /* Nombres d'options au menu */);
	
   // Tant que l'utilisateur ne veut pas quitter
	while (choixForme != QUITTER)
	{
		// Afficher le menu du remplissage et lire un choix valide
      choixRemplissage = validerMenu(2 /* Menu du remplissage */, RETOUR /* Nombres d'options au menu */);

		// Si l'utilisateur n'est pas revenu au menu principal
      if (choixRemplissage != RETOUR)
	   {
			// Ici, l'utilisateur a fait le choix d'une forme et du remplissage, il nous reste à traiter et dessiner la forme
			switch (choixForme)
			{	
				case RECTANGLE :
               // Traiter forme demande les dimensions de la forme, affiche la phrase de présentation de la forme et appelle la fonction
               // dessinant la forme
					traiterRectangle (choixRemplissage);
               break;
			    case TRIANGLE :
					traiterTriangle (choixRemplissage);
					break;
				case CARRE :
					traiterCarre (choixRemplissage);
					break;
				case LOSANGE :
					traiterLosange (choixRemplissage);
					break;
			} // Fin du switch
	   }// fin du if

      // On présente de nouveau le menu principal des choix des formes et on lit le choix de l'utilisateur
	   choixForme = validerMenu(1 /* Menu des formes*/, QUITTER /* Nombres d'options au menu*/);

	} // Fin du while (choixForme != iQUITTER)
	return 0;

}


