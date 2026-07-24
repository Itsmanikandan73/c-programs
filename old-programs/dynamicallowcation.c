#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char * name;
	int age;
}person;

int main(){

	person * myperson =(person *) malloc(sizeof(person));

	myperson->name = "manikandan";
	myperson->age = 22;

	free(myperson);

	


	return 0;
}