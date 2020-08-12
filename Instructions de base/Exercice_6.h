/*
Énoncé de l'exercice :
    Écrire un programme qui demande à l'utilisateur de taper le rayon d’une sphère,
    puis calcule et affiche son volume.

Données :
    Rayon (R)

Résultats :
    Volume (V)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float V, R;
    const float Pi = 3.14;
    printf("Veuillez entrer le rayon du sphere : ");
    scanf("%f",&R);
    V =  ( 4 * Pi * pow(R,3) ) / 3;

    printf("Le volume du sphere est : %.2f \n", V);

    return 0;
}
