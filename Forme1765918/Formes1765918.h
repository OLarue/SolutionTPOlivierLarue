//But : définir mes fonctions liées aux formes 
// auteur : OLivier Larue
// Date : 2020-11-15


#pragma once


 //Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent la phrase de présentation de la forme avec les bonnes
//dimensions et finalement appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette fonction :
// 
void traiterRectangle(int choixRemplissage);
void traiterCarre(int choixRemplissage);
void traiterTriangle(int choixRemplissage);
void traiterLosange(int choixRemplissage);

void definirRemplissageNom(int choixRemplissage); // explication de ces fonctions dans le Formes1765918.cpp
void definirRemplissageNomCarre(int choixRemplissage);

void remplissageChiffreDecroissantRectangle(int hauteur, int largeur); // Même que le remplissage en dessous, mais en décroissant.
void remplissageChiffreRectangle(int hauteur, int largeur); // Pour ajouter un style différent, j'ai pensé à la place d'un # de mettre les chiffres qu'il compte, pourquoi pas hahah
void dessinerRectangle(int hauteur, int largeur, int remplissage);// Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et lemode de remplissage sont passés en paramètre.

void dessinerTriangle1(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 1 dont la hauteur et le modede remplissage sont passés en paramètre.
void dessinerTriangle2(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 2 dont la hauteur et le modede remplissage sont passés en paramètre.
void dessinerTriangle3(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le modede remplissage sont passés en paramètre.
void dessinerTriangle4(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 4 dont la hauteur et le modede remplissage sont passés en paramètre.
void dessinerLosange(int hauteur, int remplissage);// Fonction qui dessine un losange dont la hauteur et le mode de remplissage sontpassés en paramètre.
int genererNombreAleatoire(int min, int max);// Fonction qui retourne un nombre aléatoire compris entre min et max passés en paramètre


