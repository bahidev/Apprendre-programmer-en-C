/*
Énoncé de l'exercice :
    Ecrire un programme qui demande à l'utilisateur de taper 5 notes
    et qui affiche leur somme et leur moyenne.

Données :
    N1 , N2 , N3 , N4 , N5 , N6

Résultats :
    Somme (S) , Moyenne (M)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float N1, N2, N3, N4, N5, N6;
    float S, M;
    printf("Veuillez entrer les 5 notes : ");
    scanf("%f%f%f%f%f%f",&N1 ,&N2 ,&N3 ,&N4 ,&N5 ,&N6);
    S = N1 + N2 + N3 + N4 + N5 + N6 ;
    M = S / 6 ;
    printf(" La somme des notes est : %.2f \n", S);
    printf(" La moyenne des notes est : %.2f \n", M);

    return 0;
}
