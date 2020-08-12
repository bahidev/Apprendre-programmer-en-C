/*
Énoncé de l'exercice :
    Ecrire un programme qui calcule et affiche la distance entre deux points A et B
    du plan dont les coordonnées (XA, YA) et (XB, YB) sont entrées au clavier comme
    entiers.
    NB : Utiliser les fonctions pow() et sqrt() pour calculer la puissance
         et la racine carrée .

Données :
    Xa, Ya , Xb, Yb

Résultats :
    AB

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float Xa,Xb,Ya,Yb;
    float AB;
    printf("Veuillez entrer la coordonnée X de A : ");
    scanf("%f",&Xa);
    printf("Veuillez entrer la coordonnée Y de A : ");
    scanf("%f",&Ya);
    printf("Veuillez entrer la coordonnée X de B : ");
    scanf("%f",&Xb);
    printf("Veuillez entrer la coordonnée Y de B : ");
    scanf("%f",&Yb);
    AB = sqrt( pow(Xa-Xb,2) + pow(Ya-Yb,2) );
    printf("La distance entre les deux points A et B : %.2f", AB);
    return 0;
}
