/*
Énoncé de l'exercice :
    Ecrire un programme qui affiche la résistance équivalente à trois résistances R1, R2, R3 :
    - si les résistances sont branchées en série.
    - si les résistances sont branchées en parallèle.


Données :
    R1 , R2 , R3

Résultats :
    Rser , Rpar

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float R1, R2, R3;
    float Rser,Rpar;
    printf("Veuillez entrer les valeurs de R1, R2 et R3 : \n");
    scanf("%f %f %f",&R1,&R2,&R3);
    Rser = R1 + R2 + R3 ;
    Rpar = (R1 * R2 * R3)/(R1 * R2 + R1 * R3 + R2 * R3) ;
    printf("La valeur de la resistance en serie est : %.2f\n", Rser);
    printf("La valeur de la resistance en parallele  est : %.2f", Rpar);
    return 0;
}
