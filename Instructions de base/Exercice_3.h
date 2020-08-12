/*
Énoncé de l'exercice :
    Ecrire un programme qui demande à l'utilisateur de saisir deux réels X et Y,
    et qui affiche la puissance X^Y.

Données :
    X , Y
Résultats :
    X ^ Y

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float X, Y, P;
    printf("Donner la valeur de X : ");
    scanf("%f",&X);
    printf("Donner la valeur de Y : ");
    scanf("%f",&Y);
    P = pow (X , Y);
    printf("La puissance est : %.2f \n", P);

    return 0;
}
