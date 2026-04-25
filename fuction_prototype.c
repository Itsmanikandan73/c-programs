#include <stdio.h>
#include <stdbool.h>

// This program is used to showcase the fuction prototypes in c

void hello(char name[], int age);
bool agecheck(int age);


int main(){

    hello("manikandan",22);

    if (agecheck(22)){
        printf("You are old enough to hack the system\n");
    }
    else{
        printf("You are not old enough to hack the system\n");
    }
    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool agecheck(int age){
    if (age >= 18){     // shortcut for this (return age >= 16)
        return true;
    }
    else{
        return false;
    }
}