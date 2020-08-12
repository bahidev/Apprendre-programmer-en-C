/*
Énoncé de l'exercice :
    Ecrire un programme qui demande à l’utilisateur de saisir 2 entiers A et B,
    qui échange le contenu des variables A et B puis qui affiche A et B.

Données :
    A , B

Résultats :
    A , B

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int A , B , C ;
    printf("Veuillez entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veuillez entrer la valeur de B : ");
    scanf("%d",&B);
	C = A ;
	A = B ;
	B = C ;
    printf("La nouvelle valeur de A est : %d \n", A);
    printf("La nouvelle valeur de B est : %d \n", B);
    return 0;
}
