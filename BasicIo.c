// pre-processor directive

#include "./headers/BasicIo.h"

// write code for functions decl
//this function will use printf and puts to output
// data to stdout (terminal)
void output(void){

printf("Your first name is %s\n", FIRST_NAME);
printf("Your last name is %s\n", LAST_NAME);
printf("Your weught is %f and your age is %d\n", WEIGHT, AGE);

// puts outputs a string to stdout.
// it does append a new line character to 
// the end of its out output
puts(FIRST_NAME);
puts(LAST_NAME);
}

// this finction will use 
void input(void){

int age;
char name[] = ""; // this is a C string 
float weight;
char fullname[50] = ""; // this is a C string too

//fgets
printf("Enter your full name: ");
fgets(fullname, sizeof fullname, stdin);
printf("Entered full name is: %s", fullname);

//prompt to input age
printf("Enter your age: ");
// scanf reads the value from stdin per the 
// type specified in the format specifier 
// and store it in the address of the specified variable
scanf("%d", &age);
printf("Entered age is: %d/n" , age);

printf("Enter your weight: ");
scanf("%f", &weight);
printf("Entered weight is: %.2f/n" , weight);

printf("Enter your name: ");
scanf("%s", &name);
printf("Entered name is: %s/n" , name);
}