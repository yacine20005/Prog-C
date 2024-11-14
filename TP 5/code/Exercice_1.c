#include <MLV/MLV_all.h>
#include <stdio.h>

#define LARGEUR 800
#define HAUTEUR 600

void Rectangle(int largeur, int hauteur)
{
    MLV_draw_filled_rectangle((MLV_get_window_width() - largeur) / 2, (MLV_get_window_height() - hauteur) / 2, largeur, hauteur, MLV_COLOR_BLUE);
}


void Ellispse()
{
    MLV_draw_ellipse(MLV_get_window_width() / 2, MLV_get_window_height() / 2, MLV_get_window_width() / 2, MLV_get_window_height() / 2, MLV_COLOR_WHITE);
}

void Cercle_epais(int x, int y, int rayon, int epaisseur, int couleur)
{
    MLV_draw_circle(x, y, rayon, MLV_COLOR_RED)
}

int main()
{
    MLV_create_window("Exercice 1", "Exercice 1", LARGEUR, HAUTEUR);
    Ellispse();
    MLV_update_window();
    MLV_wait_seconds(10);
    MLV_free_window();
    return 0;
}