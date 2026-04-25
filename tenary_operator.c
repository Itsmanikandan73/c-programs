#include <stdio.h>
#include <stdbool.h>

int main(){

    // tenary operator ?= alias for the if-else statements
    // (condition) ? value_if_false : value_if _true;

 /*
    int x = 10;
    int y = 7;
    int max = (x < y) ? x: y;
    printf("%d\n", max);

    
    bool isonline = false;
    printf("%s\n", (isonline) ? "online": "offline");

   
    int number = 6;
    printf("%d is %s\n", number, (number % 2==0) ? "even" : "odd");

    int age = 12;
    printf("%s\n", (age > 18) ? "adult": "teen");*/

    int hours = 13;
    int minutes = 8;
    char *meridiem = (hours < 12) ? "AM": "PM";
    //printf("%02d:%02d %s\n", hours,minutes, (hours < 12) ? "AM":"PM");

    printf("%02d:%02d %s\n", hours,minutes, meridiem);

    return 0;
}