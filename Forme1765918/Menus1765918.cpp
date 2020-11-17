#include <iostream>
#include <string>
#include "Menus1765918.h"
using namespace std;

int afficherMenu1()
{
    // constante
    const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
    const int TRIANGLE = 2;
    const int CARRE = 3;
    const int LOSANGE = 4;
    const int  QUITTER = 5;
    // variable
    int choix;
    //affichage du premier menu
    cout << "Choisissez la forme" << endl; 
    cout << RECTANGLE << " - Rectangle" << endl;
    cout << TRIANGLE << " - Triangle" << endl;
    cout << CARRE << " - Carré" << endl;
    cout << LOSANGE << " - Losange" << endl;
    cout << QUITTER << " - Quitter" << endl;
    cout << "Votre choix : ";
    choix = lireEntier();
    system("cls");

    return choix;
}

int afficherMenu2()
{
    // constante
    const int PLEIN = 1; 
    const int VIDE = 2;
    const int NUMEROTE = 3;
    const int NUMEROTEINVERSE = 4;
    const int RETOUR = 5;
    //variable
    int choix;
    // affichage du deuxième menu
    cout << "Choisissez le remplissage" << endl;
    cout << PLEIN << " - Plein" << endl;
    cout << VIDE << " - Vide" << endl;
    cout << NUMEROTE << " - numéroté (disponible pour carré et rectangle seulement)" << endl;
    cout << NUMEROTEINVERSE << " - numéroté décroissant(disponible pour carré et rectangle seulement)" << endl;
    cout << RETOUR << " - Retour au menu principale" << endl;
    cout << "Votre choix : ";
    choix = lireEntier();
    system("cls");

    return choix;
}

int validerMenu(int menu, int nbOption)
{
    int choix;

    // pour définir quel menu afficher et le valider
    if (menu == 1)
    {
        choix = afficherMenu1();
    }
    else if(menu == 2) // else if ici pour etre sur que c'est le menu 2 qui va apparaitre (et je trouve sa beau personnelement un else if, préférence personnel, pas très important hahah =) )
    {
        choix = afficherMenu2();
    }

    while (choix < 1 || choix > nbOption)   // pour valider le choix entre le 1 et le nbOption, qui est soit 5 pour quitter ou retour 
    {
        cout << "ERREUR: votre choix doit être compris entre 1 et " << nbOption << endl;
        cout << "Veuillez recommencer" << endl;
        system("pause");

        if (menu == 1)  // pour ne pas rester pris dans une boucle infinie.
        {
            choix = afficherMenu1();
        }
        else if (menu == 2)
        {
            choix = afficherMenu2();
        }

    }
    return choix;
}

int lireEntier()  // source : en classe Karine Moreau
				  // permet de lire un entier et que meme si l'utilisateur entre nimporte quoi sur le clavier, le programme ne part pas en boucle et lui
				  // affiche un message d'erreur et de recommencer.
{
  
        string clavier;

        getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
    // Problème, si la variable clavier ne commence pas par des chiffres, stoi plante le programme.
    // Avant d'utiliser stoi, il faut s'assurer que la variable clavier n'est pas vide, 
    // qu'elle commence par un chiffre positif ou négatif
        while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
            || (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
        {
            // on veut un chiffre positif ou un chiffre négatif : le signe moins le premier caractère et le deuxième chiffre 
            // doit être entre 0 et 9)
            cout << "Erreur : Vous devez taper des chiffres." << endl;
            cout << "Veuillez entrer un nombre entier :";
            //cin >> nombre;
            getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
        }
    return stoi(clavier);
}


