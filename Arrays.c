#include <stdio.h>

// array = fixed-size of elements of same data type
// size of the bytes 24 ======> printf("%d", sizeof(numbers));

int main(){

    int numbers[] = {10, 20, 30, 40, 50, 60};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "manikandan";

    //numbers[0] = 100;
    //printf("%ld\n", sizeof(numbers[0]));
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (char i = 0; i < 5; i++){
       printf("%c\n", grades[i]);
    }

    for (int a = 0; a <  size; a++){
        printf("%d\n", numbers[a]);
    }

    for (char b=0; b < sizeof(name)-1; b++){
        printf("%c\n", name[b]);
    }
    return 0;
}