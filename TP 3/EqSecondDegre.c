#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <fcntl.h>

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */
/* BUT : resoudre une equation du second degre                            */
/* PARAM : 3 valeurs float, qui sont les coefficients de l'equation       */
/*         2 adresses de float, qui stockeront les solutions possibles    */
/* RETOUR : un entier, qui sera le nombre de solutions                    */
/*          Plus precisemment :                                           */
/*                  -1, s'il y a une infinite de solutions                */
/*                  0, s'il n'y a pas de solution                         */
/*                  1, s'il y a une racine                                */
/*                  2, s'il y a deux racines distinctes                   */
/* EFFETS DE BORDS : S'il y a 1 solution, elle sera place a l'adresse de x*/
/*                   S'il y a 2 solutions, elles seront placees           */
/*                   aux adresses de x et y                               */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */

int resoudre(float a, float b, float c, float *x, float *y)
{
    float delta = b * b - 4 * a * c;
    if (a == 0 && b == 0 && c == 0)
        return -1;
    if (delta < 0)
        return 0;
    if (delta == 0)
    {
        *x = ((-b) / (2 * a));
        return 1;
    }
    if (delta > 0)
    {
        *x = ((-b - sqrt(delta)) / (2 * a));
        *y = ((-b + sqrt(delta)) / (2 * a));
        return 2;
    }
}

int main(void)
{
    int i;
    int a, b, c;
    float r_un, r_deux;;
    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &a);
        scanf(" %d", &b);
        scanf(" %d", &c);
        resoudre(a, b, c, &r_un, &r_deux);
        printf("a : %d, b : %d, c : %d |s", a, b, c);
        printf("R1 : %.6f, R2 : %.6f \n", r_un, r_deux);
    }
    return 0;
}
