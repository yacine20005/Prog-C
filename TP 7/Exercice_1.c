#include <MLV/MLV_all.h>
#include <stdio.h>
#include <stdlib.h>

#define LONGUEUR 800
#define LARGEUR 400

typedef struct
{
    int x;
    int y;
} Point;

void saisiePoint(Point *p)
{
    MLV_wait_mouse(&p->x, &p->y);
    printf("%d \n%d \n", p->x, p->y);
}

int main(void)
{
    Point p;
    MLV_create_window("scooby fenêtre", "", LONGUEUR, LARGEUR);
    saisiePoint(&p);
    MLV_wait_seconds(5);
    MLV_free_window();
    return 0;
}