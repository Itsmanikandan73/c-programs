#include <stdio.h>


int main(){

    // READ A FILE

    FILE *pFile = fopen("/home/lenovo/nasm notes","r"); // relational & absolute file path 
    char buffer[1024] = {0};

    if(pFile == NULL){
        printf("Could not open a file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    printf("program run successfully\n");

    fclose(pFile);


    return 0;
}