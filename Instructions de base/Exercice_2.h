/*
Énoncé de l'exercice :
    Ecrire un programme qui demande à l'utilisateur de taper la largeur et la longueur
    d'un rectangle et qui en affiche le périmètre et la surface.
.
Données :
    Largeur, Longueur
Résultats :
    Périmètre (P) , Surface (S)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float largeur, longeur;
    float S, P;
    printf("Veuillez entrer la largeur du rectangle : ");
    scanf("%f",&largeur);
    printf("Veuillez entrer la longeur du rectangle : ");
    scanf("%f",&longeur);
    S = largeur * longeur;
    P = (largeur + longeur) * 2;
    printf("Le perimetre du rectangle est : %.2f \n", P);
    printf("La surface du rectangle est : %.2f \n", S);

    return 0;

}
