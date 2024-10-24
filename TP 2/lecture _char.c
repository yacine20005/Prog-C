#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lecture_char(void)
{
    char a, b;
    scanf(" %c", &a);
    scanf(" %c", &b);
    printf("*%c*\n", a);
    printf("*%c*\n", b);
    return 0;
}

int main(void)
{
    lecture_char();
    return 0;
}