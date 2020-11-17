//but : d�finir mes fonctions li�es aux menus
// Auteur :Olivier Larue
// Date : 2020-10-29


#pragma once


// Liste des d�clarations des fonctions g�rant l'affichage et la validation des menus

int afficherMenu1(); // Fonction qui affiche le menu 1
int afficherMenu2(); // Fonction qui affiche le menu 2
int validerMenu(int menu, int nbOption); //Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les choix offerts dans le menu, 
						   //informations pass�es en param�tre.Cette fonction retourne le choix valid�. 
						   //L�utilisateur peut taper n�importe quoi au clavier, le programme ne part pas en boucle infinie.
int lireEntier(); // source : en classe Karine Moreau
				  // permet de lire un entier et que meme si l'utilisateur entre nimporte quoi sur le clavier, le programme ne part pas en boucle et lui
				  // affiche un message d'erreur et de recommencer.
