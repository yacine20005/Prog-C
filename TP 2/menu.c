#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int affichage_menu(void)
{
    printf("a. Rouge \n");
    printf("b. Vert \n");
    printf("c. Bleue \n");
    printf("z. Sortie \n");
}

int choix_menu(char choix)
{
    switch (choix)
    {
    case 'a':
        printf("Rouge \n");
        return 0;

    case 'b':
        printf("Vert \n");
        return 0;

    case 'c':
        printf("Bleue \n");
        return 0;

    case 'z':
        printf("Sortie \n");
        return 1;

    default:
        printf("Choix indisponible ! Entrez une valeur du menu : \n");

        scanf(" %c", &choix);
        choix_menu(choix);
    }
}

int main(void)
{
    char choix;
    affichage_menu();
    printf("Entrez une valeur du menu : ");
    scanf(" %c", &choix);
    choix_menu(choix);
}