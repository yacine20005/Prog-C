#include <stdio.h>

#define TAILLE 5

void afficheTab(int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("tab[%d] = %d \n", i, tab[i]);
    }
}

void changeTab(int tab[], int taille, int indice)
{
    tab[indice] += 2;
}

int main(void)
{
    int tab[TAILLE];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    afficheTab(tab, TAILLE);
    changeTab(tab, TAILLE, 4);
    printf("\n");
    afficheTab(tab, TAILLE);
    return 0;
}