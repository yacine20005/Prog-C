#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int devine(void)
{
    srand(time(NULL));
    int valeur, entree, essai;
    entree = -1;
    valeur = rand() % 101;
    essai = 0;
    do
    {
        printf("Saisisez un nombre : \n");
        scanf("%d", &entree);
        if (entree > valeur)
            printf("Trop grand \n");
        if (entree < valeur)
            printf("Trop petit \n");
        essai++;
    } while (entree != valeur);
    printf("Bravo ! Gagne en %d essai(s)", essai);
    return 0;
}

int main(void)
{
    devine();
    return 0;
}