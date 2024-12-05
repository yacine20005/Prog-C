#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

#define TAILLE_X 512
#define TAILLE_Y 512
#define NB_MAX_POINT 256

// clang -std=c17 -Wall Exercice_1.c -o demo -lMLV

typedef struct
{
    int x;
    int y;
} Point;

typedef struct
{
    Point point;
    int distcarre;
} PointDistance;

typedef struct
{
    PointDistance tab[NB_MAX_POINT];
    int nb_point;
} TabPoint;

void genererTabPoint(TabPoint *t, int nb_point)
{
    srand(time(NULL));
    for (int i = 0; i < nb_point; i++)
    {
        t->tab[i].point.x = rand() % TAILLE_X;
        t->tab[i].point.y = rand() % TAILLE_Y;
    }
    t->nb_point = nb_point;
}

void parcourirTabPoint(TabPoint *t)
{
    for (int i = 0; i < t->nb_point; i++)
    {
        printf("Point %d : (%d, %d)\n", i, t->tab[i].point.x, t->tab[i].point.y);
    }
}

MLV_Color fabriqueCouleur(int i)
{
    return MLV_rgba(255 - i, i, 0, 255);
}

void dessineTabPoint(TabPoint *t)
{
    for (int i = 0; i < t->nb_point; i++)
    {
        MLV_draw_filled_circle(t->tab[i].point.x, t->tab[i].point.y, 5, fabriqueCouleur(i));
    }
}

int main(void)
{
    int nb_point = 255;
    TabPoint t;
    genererTabPoint(&t, nb_point);
    parcourirTabPoint(&t);

    MLV_create_window("Points", "Points", TAILLE_X, TAILLE_Y);
    dessineTabPoint(&t);
    MLV_update_window();
    MLV_wait_seconds(10);
    MLV_free_window();
    return 0;
}