#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// This program is used to showcase the while loops program
// while do something as long as the condition is true | condition must be true in order to run program.
/*
do{
        printf("Enter a number greater than 0:");
        scanf("%d", &number);
    }while(number <= 0);
*/

int name(){

    char name[20] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

}

int main(){

    bool isRunnig = true;
    char response = '\0';

    while(isRunnig){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N= no); ");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y'){
            isRunnig = false;
        }
    }

    printf("You exit the game\n");
    
    return 0;
}