
#include "./headers/Decisions.h"

void decisions1(void){
    // declare variable of type float that will be used in conditions
    float num = NUM;

    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n", num); // displayed 
    }

    num += num;

    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n", num); // not displayed 
    } else {
        printf("%.1f is not less than 40000.0\n", num); // displayed 
    }

    num = 0;

     if (num == 0.0){
        printf("%.1f is equal to 0.0\n", num); // displayed 
    } else if (num < 0.0) {
        printf("%.1f is less to 0.0\n", num); // not displayed 
    } else {
        printf("%.1f is greater to 0.0\n", num); // not displayed 
    }
}

void decisions2(void){
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // use the logical AND 
    if (num > 0.0 && num < 40000.0){
        printf("%.1f is between 0.0 and 40000.0\n", num); // displayed if all conditions are true
    }

    num += num;

    // use the logical OR 
    if (num < 0.0 || num > 40000.0){
        printf("%.1f is  not between 0.0 and 40000.0\n", num); // displayed
    }

    // use the logical OR 
    if (!(num > 0.0 && num < 40000.0)){
        printf("%.1f is  not between 0.0 and 40000.0\n", num); // displayed
    }
}

void decisions3(void){
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false


    // use bool variable in an if-else statement
    if(isNotBetween){
        printf("%.1f is not between 0.0 and 40000.0\n", num); // not displayed
    } else {
        printf("%.1f is between 0.0 and 40000.0\n", num); // displayed
    }
}

// this function uses the ternary operator
// the ternary operatoris only operator that has 3 operands 
void decisions4(void){
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false

    // operand 1 is a bool expression that gets evaluated
    // operand 2 is the value get returned if the bool expression is true
    // operand 3 is the value get returned if the bool expression is false
    float extra = isNotBetween ? (num - 40000.0) : 0.0; // operand 3 will get assigned to extra

    //display the value in extra
    printf("%.1f\n", extra);
}

// this function uses the switch statement
void decisions5(void){

     // declare variables
     char operation;
     int num1;
     int num2;

     printf("Enter an operation (+, -, *, /): ");
     scanf("%c", &operation);

     printf("Enter first number: ");
     scanf("%d", &num1);

     printf("Enter second number: ");
     scanf("%d", &num2);

     switch (operation)
     {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
            default:
            printf("Invalid operation!");
        
        }
}

// this function illustrates short circuit evaluation
// this is when the compiler
void decisions6(void){
    int x = 1;
    bool y = true;

    // short circuit evaluation will not occur 
    // because all sub expression are true
    if (x == 1 && y){
        printf("if block exeuted.\n"); // displayed
    } else {
        printf("if block not exeuted.\n"); // not displayed
    }

    // short circuit evaluation will occur 
    // because the first sub-expression is false
    if (x == 0 && y){
        printf("if block exeuted.\n"); // not displayed
    } else {
        printf("if block not exeuted.\n"); // displayed
    }

    // short circuit evaluation will occur 
    // because the first sub-expression is true
    if (x == 1 || y){
        printf("if block exeuted.\n"); // displayed
    } else {
        printf("if block not exeuted.\n"); // not displayed
    }

    // short circuit evaluation will not occur 
    // because the first sub-expression is false
    if (x == 0 || y){
        printf("if block exeuted.\n"); // displayed
    } else {
        printf("if block not exeuted.\n"); // not displayed
    }

}