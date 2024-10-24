#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 5

int position(int tab[], int taille, int elt)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        if (tab[i] == elt)
            return i;
    }
    return -1;
}

void affiche_tab(int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void)
{
    int i, result;
    int tab[TAILLE] = {1, 3, 2, 4, 5};
    affiche_tab(tab, TAILLE);
    result = position(tab, TAILLE, 15);
    printf("%d \n", result);
    return 0;
}