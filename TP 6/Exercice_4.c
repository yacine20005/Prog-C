#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

int compteMots(FILE* fichier)
{
    int compteur = 1;
    char ch;
    ch = fgetc(fichier);
    while(ch != EOF)
    {
        if (ch == '\n' || ch == ' ' || ch == '\t')
        {
            compteur += 1;
            while(ch == '\n' || ch == ' ' || ch == '\t')
            {
                ch = fgetc(fichier);
            }
        }
        ch = fgetc(fichier);
    }
    printf("%d \n", compteur);
    return compteur;
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
            int resultat = compteMots(fichier);
            fclose(fichier);
            return resultat;
        }
    }
    return -1;
}
