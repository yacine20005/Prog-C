#include <MLV/MLV_all.h>
#include <stdio.h>

#define LARGEUR 800
#define HAUTEUR 600

void Cercle_epais(int x, int y, int rayon, int epaisseur, int couleur)
{
    int i;
    if (epaisseur != 0 && epaisseur > 1)
    {
        for (i = epaisseur; i > 0; i--)
        {
            MLV_draw_circle(x, y, rayon + i, MLV_COLOR_RED);
        }
    }
    else
    {
        MLV_draw_circle(x, y, rayon, MLV_COLOR_RED);
    }
}

int main()
{
    int x, y, rayon, epaisseur, couleur;
    MLV_create_window("Exercice 3", "Exercice 3", LARGEUR, HAUTEUR);
    printf("Donnez x : ");
    scanf("%d", &x);
    printf("Donnez y : ");
    scanf("%d", &y);
    printf("Donnez le rayon : ");
    scanf("%d", &rayon);
    printf("Donnez l'epaisseur : ");
    scanf("%d", &epaisseur);
    printf("Donnez la couleur : ");
    scanf("%d", &couleur);
    Cercle_epais(x, y, rayon, epaisseur, couleur);
    MLV_update_window();
    MLV_wait_seconds(10);
    MLV_free_window();
    return 0;
}