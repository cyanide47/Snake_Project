#include <stdlib.h>
#include <stdio.h>


#define COLS 60
#define ROWS 30

int main()
{
    int quit = 0;
    while (!quit) {
        // Render table
        printf("|");
        for (int i = 0; i < COLS; i++)
            printf("-");
        printf("|\n");

    }

    return 0;
}