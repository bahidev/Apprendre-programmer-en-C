/*
Énoncé de l'exercice :
    Écrire un programme qui demande un temps T (entier) exprimé en secondes,
    et qui le convertit en heures, minutes, secondes.
    Exemple : T = 56263 seconds => 15 heures 37 minutes 43 seconds.

Données :
    Temps en secondes (T)

Résultats :
    Heures (H), Minutes (M), secondes (S)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int T , H , M , S , R ;
    printf("Veuillez entrer la duree en seconde : ");
    scanf("%d",&T);
    H = T / 3600 ;
    R = T % 3600 ;
	M = R / 60 ;
    S = R % 60 ;
    printf("%dH %dm %ds", H,M,S);
    return 0;
}
