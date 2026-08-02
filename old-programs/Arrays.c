#include <stdio.h>
#include <stdlib.h>

void calling_func(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char names[] = "x86owl";
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (char i = 0; i < 4; i++) {
        fprintf(stdout, "%c ", grades[i]);
    }
    printf("\n");
    
    for (int j = 0; j < size; j++) {
        fprintf(stdout, "%d ", numbers[j]);
    }
    printf("\n");
    
    for (char k = 0; k < sizeof(names) - 1; k++) {
        fprintf(stdout, "%c", names[k]);
    }
    printf("\n");
    
}

// array = fixed-size of elements of same data type
// size of the bytes 24 ======> printf("%d", sizeof(numbers));

int main(int argc, char *argv[]) {
    calling_func();
    
    return EXIT_SUCCESS;
}
