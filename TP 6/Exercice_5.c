#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

int compteCaracteres(FILE *fichier)
{
    int compteur = 0;
    while (fgetc(fichier) != EOF)
    {
        compteur += 1;
    }
    printf("%d \n", compteur - 1);
    return compteur - 1;
}

int compteLignes(FILE *fichier)
{
    int compteur = 1;
    char ch;
    ch = fgetc(fichier);
    while (ch != EOF)
    {
        if (ch == '\n')
        {
            compteur += 1;
        }
        ch = fgetc(fichier);
    }
    printf("%d \n", compteur);
    return compteur;
}

int compteMots(FILE *fichier)
{
    int compteur = 1;
    char ch;
    ch = fgetc(fichier);
    while (ch != EOF)
    {
        if (ch == '\n' || ch == ' ' || ch == '\t')
        {
            compteur += 1;
            while (ch == '\n' || ch == ' ' || ch == '\t')
            {
                ch = fgetc(fichier);
            }
        }
        ch = fgetc(fichier);
    }
    printf("%d \n", compteur);
    return compteur;
}

int main(int argc, char *argv[]) // On commence le main avec argc qui correpond au nombre d'arguments et argv qui correspond au arguments
{
    int opt;                                          // On initialise opt
    while ((opt = getopt(argc, argv, "c:s:d")) != -1) // On parcourt les arguments
    {
        switch (opt) // On switch sur les arguments
        {
        case 'm':
            break;
        case 'c':
            break;
        case 'l':
            break;
        case 'v':
            break;
        default:                // Si l'argument est invalide
            afficher_aide();    // On affiche l'aide
            exit(EXIT_FAILURE); // et on quitte le programme
        }
    }
}