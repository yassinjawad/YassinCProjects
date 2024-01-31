// pre-processor directive

#include "./headers/Loops.h"

// write code for functions declared in loops.h

// this function using macro expression

void loops1(void) {
    int i = START;

    while(CONDITION(i)) {
        printf("%d ", i);
        i--;
    }
    printf("blastoff\n");
}

void loops2(void){
    // this function using macro expression
    int i = START;
    do{
         printf("%d ", i);
        i--;

    } while(CONDITION(i));
        
    printf("blastoff\n");

}

void loops3(void){

    // set up for loop using macro
    for (int i = START; CONDITION(i); i--){
        printf("%d ", i);
    }
    printf("blastoff\n");

}

// this function 

void loops4(void){
    // set up for loop using macro
    for (int i = START; CONDITION(i); i--){
        printf("%d ", i);
        // use macro expression in if 
        if(BREAK(i)){
            break;
        }
    }
    printf("early blastoff\n");

}

// this function uses a continue statement to skip
void loops5(void){
    // set up for loop using macro
    for (int i = START; CONDITION(i); i--){
        // use macro expression in if condition
        // 0 - false
        // 1 - true
        if (CONTINUE(i)){
            continue;
        }
        printf("%d ", i);
    }
    printf("even blastoff\n");

}

// this function uses recursion to display a contdown
// to stdout
void recursion(int i){
    // this is our stopping condition 
    if (i == 0){
        printf("blastoff\n");
    } else {
        printf("%d ", i);
        recursion(--i);
    }

}