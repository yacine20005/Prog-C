#include <stdio.h>
#include <stdlib.h>

int valAbsolueV1(int entier)
{
    return abs(entier);
}

int valAbsolueV2(int * entier)
{
    return abs(* entier);
}

int main_old(void)
{
    int n, p;
    printf("Entrez la valeur : \n");
    scanf("%d", &n);
    printf("Avant valAbsolueV1 : n = %d | Adresse de n = %p \n", n, &n);
    p = valAbsolueV1(n);
    printf("Apres valAbsolueV1 : p = %d | Adresse de p = %p \n", p, &p);
    return 0;
}

int main(void)
{
    int n;
    printf("Entrez la valeur : \n");
    scanf("%d", &n);
    printf("Avant valAbsolueV2 : n = %d | Adresse de n = %p \n", n, &n);
    n = valAbsolueV2(&n);
    printf("Apres valAbsolueV2 : n = %d | Adresse de n = %p \n", n, &n);
    return 0;
}
