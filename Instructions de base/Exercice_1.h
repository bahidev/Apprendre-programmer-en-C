/*
Énoncé de l'exercice :
    Ecrire un programme qui demande l'année de naissance d'une personne,
    puis il calcule et affiche l'âge de la personne.
Données :
    date_naissance
Résultats :
    age

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int date_naissance, age;
    printf(" Quelle est votre annee de naissance? \n");
    scanf("%d",&date_naissance);
    age = 2020 - date_naissance;
    printf("Vous aurez alors %d ans cette annee!", age);
    return 0;

}
