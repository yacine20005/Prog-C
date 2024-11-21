#include <MLV/MLV_all.h>
#include <stdio.h>
#include <stdlib.h>

#define LONGUEUR 1200
#define LARGEUR 600
#define TAILLE_MAX 20

typedef struct
{
    int x;
    int y;
} Point;

typedef struct
{
    int a;
    int b;
    int c;
} Droite;

typedef struct
{
    int taille;
    Point sommets[TAILLE_MAX];
} Polygone;

void dessinePolygone(Polygone p)
{
    int i = 0;
    int array_x[TAILLE_MAX];
    int array_y[TAILLE_MAX];
    int first_x = p.sommets[0].x;
    int first_y = p.sommets[0].y;
    for (i = 0; i < p.taille; i++)
    {
        }
}

void saisiePoint(Point *P)
{
    MLV_wait_mouse(&P->x, &P->y);
    printf("x = %d \ny = %d \n", P->x, P->y);
}

int construireDroite(Point P, Point Q, Droite *D)
{
    if (P.x != Q.x && P.y != Q.y)
    {
        D->a = Q.y - P.y;
        D->b = P.x - Q.x;
        D->c = -(P.x * (Q.y - P.y) + P.y * (P.x - Q.x));
        return 0;
    }
    return 1;
}

void dessinDroite(Droite D)
{
    int x1 = 0;
    int y1 = (-D.c - D.a * x1) / D.b;
    int x2 = LONGUEUR;
    int y2 = (-D.c - D.a * x2) / D.b;
    MLV_draw_line(x1, y1, x2, y2, MLV_COLOR_RED);
    MLV_update_window();
}

int main(void)
{
    Point x;
    Point y;
    Droite d;
    MLV_create_window("scooby fenêtre", "", LONGUEUR, LARGEUR);
    saisiePoint(&x);
    saisiePoint(&y);
    if (construireDroite(x, y, &d) == 0)
    {
        printf("y1 = %d\ny2 = %d \n", ((-d.c - d.a * 0) / d.b), (-d.c - d.a * LONGUEUR) / d.b);
        dessinDroite(d);
    }
    MLV_wait_seconds(5);
    MLV_free_window();
    return 0;
}