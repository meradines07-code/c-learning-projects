#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int nombreMystere=0,nombreEntre=0;
    const int MAX=100 , MIN =1;

    srand(time(NULL));
    nombreMystere=(rand()%(MAX-MIN+1))+MIN;
do
 {
    printf("entrer un nombre :");
    scanf("%d",&nombreEntre);
    if (nombreEntre<nombreMystere)
        printf("le nombre est trop petit");
    else if(nombreEntre>nombreMystere)
    printf("le nombre est trop  grand");


    }while (nombreEntre !=nombreMystere);




printf("bravo vous avez trouver ");


return 0;

}
