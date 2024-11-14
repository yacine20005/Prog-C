#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

int compteCaracteres(FILE* fichier)
{
    int compteur = 0;
    while(fgetc(fichier) != EOF)
    {
        compteur += 1;
    }
    printf("%d \n", compteur - 1);
    return compteur - 1;
}

int main(int argc, char *argv[])
{
    int i;
    for (i = 1; i < argc; i++)
    {
        FILE* fichier = fopen(argv[i], "r");
        if (fichier != NULL)
        {
            printf("le fichier %s existe \n", argv[i]);
            int resultat = compteCaracteres(fichier);
            fclose(fichier);
            return resultat;
        }
    }
    return -1;
}
