#include <stdio.h>


int main(){

    // WRITE A FILE

    FILE *pFile = fopen("/home/lenovo/Desktop/output.txt" ,"w"); // absoulte filepath

    char text[] = "I am a hacker i will become an penetration tester\nEveryday i am working hard towards my goal\n"; // relational file path 

    if (pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("file was written successfully\n");

    fclose(pFile);

    return 0;
}