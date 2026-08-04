#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv) {

    FILE *ptr_file = fopen("/home/x86owl/c-programs/old-programs/output.txt", "wb");   

    char text[] = "I am an hacker also gretest programmer in the world!, i will work hard to become greatest of all time.";

    if (ptr_file == NULL) {
        fprintf(stderr, "Error: opening the file\n");
        return 1;
    }

    fprintf(ptr_file, "%s", text);
    puts("File was written successfully.");

    fclose(ptr_file);
    ptr_file = NULL;
    
    return EXIT_SUCCESS;
}
