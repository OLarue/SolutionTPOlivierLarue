//but : 
// Auteur :
// Date : 2020-10-29


#pragma once


// Liste des déclarations des fonctions gérant l'affichage et la validation des menus

int afficherMenu1(); // Fonction qui affiche le menu 1
int afficherMenu2(); // Fonction qui affiche le menu 2
int validerMenu(int menu, int nbOption); //Fonction qui lit le choix de l’utilisateur et vérifie que le choix est bien parmi les choix offerts dans le menu, 
						   //informations passées en paramètre.Cette fonction retourne le choix validé. 
						   //L’utilisateur peut taper n’importe quoi au clavier, le programme ne part pas en boucle infinie.
int lireEntier();
