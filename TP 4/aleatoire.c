#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 5

void alea_1(void)
{
    int x, i;
    for (i = 1; i < 21; i++)
    {
        x = rand() % 100;
        printf("Num aleatoire n°%d : %d \n", i, x);
    }
}

void alea_2(void)
{
    int x, i;
    srand(time(NULL));
    for (i = 1; i < 21; i++)
    {
        x = rand() % 100;
        printf("Num aleatoire n°%d : %d \n", i, x);
    }
}

void initAlea(int tab[], int taille, int max)
{
    int x, i;
    srand(time(NULL));
    for (i = 0; i < taille; i++)
    {
        tab[i] = rand() % max;
        printf("%d ", tab[i]);
    }
}

int main(void)
{
    int t[TAILLE];
    initAlea(t, TAILLE, 10);
    return 0;
}