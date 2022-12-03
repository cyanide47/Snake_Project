#include <stdlib.h>
#include <stdio.h>


#define COLS 60
#define ROWS 30

int main(){

    // Hide cursor
    printf("\e[?25l");

    int x[1000], y[1000];
    int quit = 0;
    while (!quit) {
        // Render table
        // First lines
        printf("X");
        for (int i = 0; i < COLS; i++)
            printf("-");
        printf("X\n");

        // middle lines
        for (int j = 0; j < ROWS; j++) {
            printf("|");
            for (int i = 0; i < COLS; i++)
                printf(".");
            printf("|\n");
        }

        // End lines
        printf("X");
        for (int i = 0; i < COLS; i++)
            printf("-");
        printf("X\n");

        // Move cursor back to top
        printf("", ROWS);

        int head = 0, tail = 0;
        x[head] = COLS/2;
        y[head] = ROWS/2;
        int gamover = 0;
        int xdir = 1, ydir = 0;
    }

    // Show cursor
    printf("\e[?25h");
    return 0;
}