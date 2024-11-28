#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float *coeffs;
    int degre;
} Polynome;

void affichePolynome(Polynome p)
{
    int i;
    for (i = 0; i <= p.degre; i++)
    {
        if (p.coeffs[i] != 0)
        {
            printf("+ %fX^%d ", p.coeffs[i], i);
        }
    }
    printf("\n");
}

int lirePolynome(Polynome *p)
{
    int degre_user;
    float coeff_user;
    printf("Entrez le degre du polynome : \n");
    scanf("%d", &degre_user);
    p->degre = degre_user;
    p->coeffs = calloc(degre_user + 1, sizeof(float));
    if (p->coeffs == NULL)
    {
        return 0;
    }
    printf("Entrez le coefficient du terme de degre %d : \n", degre_user);
    scanf("%f", &(p->coeffs[degre_user]));
    printf("Entrez le degre suivi du coefficient (terminer avec un degre negatif) : \n");
    scanf("%d", &degre_user);
    while (degre_user >= 0)
    {
        scanf("%f", &(p->coeffs[degre_user]));
        scanf("%d", &degre_user);
    }
    while (degre_user >= 0)
        return 1;
}

int somme(Polynome p, Polynome q, Polynome *res)
{
    
}

int main(void)
{
    Polynome p;
    lirePolynome(&p);
    affichePolynome(p);
    return 0;
}