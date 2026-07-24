#include <stdio.h>

// This script is used to showcase the Variable Scope
// outside of function is called global scope
// inside of the function is called local scope
// Better to use local scope in c  | don't use global cause (hard to debug it)

int add(int x, int y){
    int result = x + y;
    return result;
}

int main(){ 

    int x = 0;
    int y = 0;

    printf("Enter two number to add\n");
    scanf("%d", &x);
    scanf("%d", &y);
    int result = add(x,y);
    printf("%d\n", result);
    

    return 0;
}