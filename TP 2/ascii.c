#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ascii(void)
{
    int valeur;
    for (valeur = 0; valeur < 10; valeur++)
        printf("caractere %c : code %d \n", valeur, valeur);
    for (valeur = 65; valeur < 91; valeur++)
        printf("caractere %c : code %d \n", valeur, valeur);
    return 0;
}

int main(void)
{
    ascii();
    return 0;
}