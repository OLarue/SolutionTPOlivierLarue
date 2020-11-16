//But : d�finir mes fonctions li�es aux formes 
// auteur : OLivier Larue
// Date : 2020-11-15


#pragma once


 //Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent la phrase de pr�sentation de la forme avec les bonnes
//dimensions et finalement appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette fonction :
// 
void traiterRectangle(int choixRemplissage);
void traiterCarre(int choixRemplissage);
void traiterTriangle(int choixRemplissage);
void traiterLosange(int choixRemplissage);

void definirRemplissageNom(int choixRemplissage);
void definirRemplissageNomCarre(int choixRemplissage);

void remplissageChiffreDecroissantRectangle(int hauteur, int largeur); // M�me que le remplissage en dessous, mais en d�croissant.
void remplissageChiffreRectangle(int hauteur, int largeur); // Pour ajouter un style diff�rent, j'ai pens� � la place d'un # de mettre les chiffres qu'il compte, pourquoi pas hahah
void dessinerRectangle(int hauteur, int largeur, int remplissage);// Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et lemode de remplissage sont pass�s en param�tre.

void dessinerTriangle1(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 1 dont la hauteur et le modede remplissage sont pass�s en param�tre.
void dessinerTriangle2(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 2 dont la hauteur et le modede remplissage sont pass�s en param�tre.
void dessinerTriangle3(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le modede remplissage sont pass�s en param�tre.
void dessinerTriangle4(int hauteur, int remplissage);// Fonction qui dessine un triangle dans la position 4 dont la hauteur et le modede remplissage sont pass�s en param�tre.
void dessinerLosange(int hauteur, int remplissage);// Fonction qui dessine un losange dont la hauteur et le mode de remplissage sontpass�s en param�tre.
int genererNombreAleatoire(int min, int max);// Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en param�tre

