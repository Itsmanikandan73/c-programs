#include <stdio.h>


// This program is used to showcase the 2D ARRAY
// array of arrays

int main(){

    /*int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
                       
    //printf("%d \n", numbers[0][0]);*/

    char numpad[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};

    for (int i = 0; i < 4; i++){ //rows
        for (int a = 0; a < 3; a++){//columns
            printf("%c  ", numpad[i][a]);
        }
        printf("\n");
    }


    return 0;
}