#include <stdio.h>

typedef int numbers;
typedef char string[30];
typedef char initials[3];

int main(){
    // typedef existing_type new_type;
    /*numbers x = 3;
    numbers y = 5;
    numbers z = x + y;
    printf("%d\n", z);

    
    string name = "manikandan";
    printf("%s\n", name);*/

    initials user1 = "JK";
    initials user2 = "MR";
    initials user3 = "RR";
    initials user4 = "SK";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);


    return 0;
}