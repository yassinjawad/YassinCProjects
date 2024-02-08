// pre-processor directive

// include
#include "./headers/Functions.h"

// white code for functions declared in Functions.h
// this function uses perameters, all having the char * type.
// strings don't exist as a type in C like they do in Java and Python.
// in C strings are treated like an arraay of characters and are 
// referred to as the char * type.
// when you have a * in  a perameter  
void congratulate1(char *student, char *language, char *programmer){
    // display a message to stdout
    printf("%s has done as much %s programming as %s.\n", student, language, programmer);
    congratulate2(student, language, programmer);
}

// this function 
void congratulate2(char *student, char *language, char *programmer){
    int days = strlen(programmer);
    // display a message to stdout
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student, language, programmer, days);

}

// this function confert a cel
float fahrenheitFromCelsius(float celsius) {
    // use macro 
    return FAHRENHEIT(celsius);
}