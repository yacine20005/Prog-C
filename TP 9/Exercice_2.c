#include <stdio.h>

typedef struct {
    float * coeffs;
    int degre;
} Polynome;

void affichePolynome(Polynome p)
{
    int i;
    for (i = 0; i < p.degre; i++){
        if (p.coeffs[i] != 0){
            printf("+ %fX^%d ", p.coeffs[i], i);
        }
    }
    printf("\n");
}

int main(void){
    Polynome p;
    p.degre = 4;
    float array_coeffs[] = {3, 2, 1, 0};
    p.coeffs = array_coeffs;
    affichePolynome(p);
    return 0;
}