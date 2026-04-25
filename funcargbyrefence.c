#include <stdio.h>

typedef struct {

	char * name;
	int age;

}person;

void birthday(person *p);
void birthday(person * p){

 		p->age++;
}


int main(){

	person manikandan;

	manikandan.name = "manikandan";

	manikandan.age = 21;

	printf("%s is %d years old \n", manikandan.name, manikandan.age);

	birthday(&manikandan);

	
	printf("Happy birthday ! %s is %d years old \n", manikandan.name, manikandan.age);


 	return 0;
}