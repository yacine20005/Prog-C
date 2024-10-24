#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ajouteDix(int *entier)
{
    *entier += 10;
}

void echange(int *a, int *b)
{
}

int main(void)
{
    int scooby;
    printf("Entrez une scooby-valeur : \n");
    scanf("%d", &scooby);
    printf("var : %d \n", scooby);
    printf("* var : %d \n", &scooby);
    ajouteDix(&scooby);
    printf("var : %d \n", scooby);
    printf("* var : %d \n", &scooby);
}