#include <stdio.h>
#include <stdlib.h>

// Arrays & User Input | Garbage values  

int main(void) {
    int scores[5] = {0};



    for (int i = 0; i < 6; i++) {
        fprintf(stdout,"Please enter your scores[%d]\n", i);
        fscanf(stdin, "%10d", &scores[i]);
    }
    printf("\n");
    puts("The score is entered in this sequences");
    for (int i = 0; i < 6; i++) {
        fprintf(stdout, "%d\n", scores[i]);
    }

    return EXIT_SUCCESS;
}
