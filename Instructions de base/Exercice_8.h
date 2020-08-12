/*
Énoncé de l'exercice :
    Ecrire un programme qui demande à l’utilisateur de saisir 2 entiers A et B,
    qui échange le contenu des variables A et B puis qui affiche A et B.
    Cette fois sans utiliser d’autre variable que A et B.


Données :
    A , B

Résultats :
    A , B

*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int A , B ;
    printf("Veuillez entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veuillez entrer la valeur de B : ");
    scanf("%d",&B);
	A = A + B;
	B = A - B;
	A = A - B;
    printf("La nouvelle valeur de A est : %d \n", A);
    printf("La nouvelle valeur de B est : %d \n", B);
    return 0;
}
