#include <stdio.h>

// This program is used to showcase the break and continue
//Break == Break out of the loop(STOP)
//Contiue == skip current cycle of a loop (SKIP)

int main(){

    for (int i = 1; i <= 10; i++){

        if(i == 5){
            continue;
        }
        else if(i == 9){
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}