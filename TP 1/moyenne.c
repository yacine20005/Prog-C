#include <stdio.h>

int main(void) {
    /* données */
    int n, q, p;  /*2 nombres entiers fournis par l’utilisateur */
    /* resultat */
    double moyenne;  /* moyenne des nombres n et p */
    printf("Ce programme calcule la moyenne de deux entiers\n");
    printf("Donnez le premier nombre : ");
    scanf("%d", &n);  /* saisie du premier nombre */
    printf("Donnez le deuxième nombre : ");
    scanf("%d", &p);  /* saisie du deuxième nombre */
    if (n > 0 || p > 0) {
        moyenne = (n + p) / 2; /* calcul de la moyenne */
        printf("La moyenne des deux nombres est : %f", moyenne);
    } 
    else {
        printf("Entrez au moins une valeur positif");
        return 1;
    }
    return 0;
}
