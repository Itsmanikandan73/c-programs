#include <stdio.h>

// This program is used to showcase the work of Nested loop
/*
    for (int a = 1; a < 4; a ++){
            for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");
    }

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <=10; j++){
            printf("%4d ", i * j);
        }
        printf("\n");
    }*/

int main(){

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &columns);
    
    printf("Enter the # of symbol: ");
    scanf(" %c", &symbol);

    for(int a = 0; a < rows; a++ ){
           for (int i = 0; i < columns; i++){
        printf("%c", symbol);
    }
    printf("\n");
    }

    return 0;
}