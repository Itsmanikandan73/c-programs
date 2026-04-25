#include <stdio.h>
#include <string.h>
// Array of strings 

int main(){

   /* char fruits[][20] = {"Apple",
                        "Banana",
                        "Coconut",
                        "pineapple"};
    int size = sizeof(fruits)/ sizeof(fruits[0]);


    fruits[0][0] = 'e';
    fruits[0][4] = 'A';
    
    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 't';
    fruits[2][6] = 'C';


    for (int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }*/

    char names[4][20] = {0};
    int rows = sizeof(names) / sizeof(names[0]);
    
    for (int i = 0; i < rows; i++){
        printf("Enter your name: ");
        fgets(names[i],sizeof(names[i]), stdin);
        names[i][strlen(names[i]) -1] = '\0';

    }

    for (int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }   
    return 0;
}