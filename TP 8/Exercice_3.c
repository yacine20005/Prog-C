#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

#define TAILLE_X 512
#define TAILLE_Y 512
#define ORIGINE_X 256
#define ORIGINE_Y 256
//#define ORIGINE_X TAILLE_X/2
//#define ORIGINE_Y TAILLE_Y/2
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
        printf("Point %d : (%d, %d) / Distance_carre : %d\n", i, t->tab[i].point.x, t->tab[i].point.y, t->tab[i].distcarre);
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

void calculeDistances(TabPoint *t, Point origine)
{
    for (int i = 0; i < t->nb_point; i++)
    {
        int distance_x = (t->tab[i].point.x - origine.x) * (t->tab[i].point.x - origine.x);
        int distance_y = (t->tab[i].point.y - origine.y) * (t->tab[i].point.y - origine.y);
        t->tab[i].distcarre = distance_x + distance_y;
    }
}

int main(void)
{
    int nb_point = 255;
    TabPoint t;
    Point origine = {ORIGINE_X, ORIGINE_Y};
    genererTabPoint(&t, nb_point);
    calculeDistances(&t, origine);
    parcourirTabPoint(&t);

    MLV_create_window("Points", "Points", TAILLE_X, TAILLE_Y);
    dessineTabPoint(&t);
    MLV_update_window();
    MLV_wait_seconds(10);
    MLV_free_window();
    return 0;
}