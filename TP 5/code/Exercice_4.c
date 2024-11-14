#include <MLV/MLV_all.h>
#include <stdio.h>

#define LARGEUR 800
#define HAUTEUR 600

void Cercle(int rayon)
{
    MLV_draw_circle(MLV_get_window_width() / 2, MLV_get_window_height() / 2, rayon, MLV_COLOR_RED);
}

int main()
{
    int rayon, pas;
    MLV_create_window("Exercice 4", "Exercice 4", LARGEUR, HAUTEUR);
    printf("Donnez le pas : ");
    scanf("%d", &pas);
    for (rayon = 0; rayon < MLV_get_window_height() && rayon < MLV_get_window_width(); rayon += pas)
    {
        Cercle(rayon);
        MLV_update_window();
    }
    MLV_free_window();
    return 0;
}