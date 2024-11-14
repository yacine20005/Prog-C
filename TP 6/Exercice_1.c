#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

void slice(const char* str, char* result, size_t start, size_t end) {
    //stack overflow
    strncpy(result, str + start, end - start);
}

int main(int argc, char *argv[])
{
    //FILE * fichier;
    char result[256];
    int i;
    for (i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            slice(argv[i], result, 1, strlen(argv[i]));
            if (result, "r")
            {
                printf("le fichier %s existe \n", result);
            }
        }
    }
    printf("%d \n", argc - 1);
    return argc - 1;
}