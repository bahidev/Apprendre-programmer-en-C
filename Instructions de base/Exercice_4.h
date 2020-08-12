/*
Énoncé de l'exercice :
    Ecrire un programme opérations qui calcule la somme, le produit,
    la différence et la division de deux nombre réels.

Données :
    A , B
Résultats :
    Somme (S) , Produit (P) , Différence (Df), Division (Dv)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float A, B;
    float S, P , Dv , Df;
    printf("Veuillez entrer la valeur de A : ");
    scanf("%f",&A);
    printf("Veuillez entrer la valeur de B : ");
    scanf("%f",&B);
    S = A + B ;
    P = A * B ;
    Dv = A / B ;
    Df = A - B ;
    printf(" La somme est : %.2f \n", S);
    printf(" A * B = %.2f \n", P);
    printf(" A / B = %.2f \n", Dv);
    printf(" A - B = %.2f \n", Df);

    return 0;
}
