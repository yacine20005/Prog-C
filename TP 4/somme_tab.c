#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 5
#define Y 2

void affiche_tab(int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void somme_tab(int x[], int y[], int taille, int result[])
{
    int i, somme;
    for (i = 0; i < taille; i++)
    {
        somme = x[i] + y[i];
        result[i] = somme;
    }
}

void somme_tab_brother(int liste_tab[][TAILLE], int nb_tab, int result[])
{
    int x, y;
    for (x = 0; x < nb_tab; x++)
    {
        for (y = 0; y < TAILLE; y++)
            result[y] = result[y] + liste_tab[x][y];
    }
}

int old_main(void)
{
    int i, z[TAILLE];
    int x[TAILLE] = {1, 3, 2, 4, 5};
    int y[TAILLE] = {10, 10, 11, 10, 10};
    affiche_tab(x, TAILLE);
    affiche_tab(y, TAILLE);
    somme_tab(x, y, TAILLE, z);
    affiche_tab(z, TAILLE);
    return 0;
}

int main(void)
{
    int result[TAILLE];
    int liste_tab[Y][TAILLE] = {{10, 10, 11, 10, 10}, {1, 3, 2, 4, 5}};
    somme_tab_brother(liste_tab, Y, result);
    affiche_tab(result, 5);
    return 0;
}