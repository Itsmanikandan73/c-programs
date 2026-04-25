#include <stdio.h>

// Arrays & User Input 
// Garbage values | 

int main(){

    int scores[6] = {};


    for (int i = 0; i < 6; i++){
        printf("Enter your score: ");
        scanf("%d", &scores[i]);
    }


    for(int a = 0; a < 6; a++){
        printf("%d\n", scores[a]);
    }


    return 0;
}