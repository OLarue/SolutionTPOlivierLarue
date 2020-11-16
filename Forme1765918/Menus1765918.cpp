#include <iostream>
#include <string>
#include "Menus1765918.h"
using namespace std;

int afficherMenu1()
{
    const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
    const int TRIANGLE = 2;
    const int CARRE = 3;
    const int LOSANGE = 4;
    const int  QUITTER = 5;
    int choix;

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
    const int PLEIN = 1; 
    const int VIDE = 2;
    const int RETOUR = 3;
    int choix;

    cout << "Choisissez le remplissage" << endl;
    cout << PLEIN << " - Plein" << endl;
    cout << VIDE << " - Vide" << endl;
    cout << RETOUR << " - Retour au menu principale" << endl;
    cout << "Votre choix : ";
    choix = lireEntier();
    system("cls");

    return choix;
}

int validerMenu(int menu, int nbOption)
{
    int choix;


    if (menu == 1)
    {
        choix = afficherMenu1();
    }
    else if(menu == 2)
    {
        choix = afficherMenu2();
    }

    while (choix < 1 || choix > nbOption)
    {
        cout << "ERREUR: votre choix doit être compris entre 1 et " << nbOption << endl;
        cout << "Veuillez recommencer" << endl;
        system("pause");

        if (menu == 1)
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

int lireEntier()
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


