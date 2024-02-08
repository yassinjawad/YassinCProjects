// pre-processor directive

// include
#include "./headers/Pointers.h"
void printAddress(void){
    printf("The printAddress function is stored at memory location %p.\n", printAddress);
}

int * getAddress(void){

    int *ptr;

    ptr = &i;

    return ptr;
}

int getDataAtAddress(void){
    int *ptr;

    ptr = &i;

    return *ptr;
}

double storeDataAddress(void){
    double *ptr;

    ptr = &j;

    *ptr += *ptr;

    return *ptr;
}

int getDoubleBytes(void){
    double *ptr;

    ptr = &j;

    return sizeof(*ptr);
}

int getPointerToDoubleBytes(void){
    // declare a pointer to a double
    // the stare is needed when declaring a pointer 
    double *ptr;

    // get the address of the global variable j
    // and store it in the pointer 
    // the ampersand is needed when getting the address 
    // of a variable
    ptr = &j;

    // return the size of the pointer 
    // neither the star nor ampersand are needed 
    // when using an address in a pointer
    return sizeof(ptr);
}

int getIntBytes(void){
    // declare a pointer to an int
    // the stare is needed when declaring a pointer 
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer 
    // the ampersand is needed when getting the address 
    // of a variable
    ptr = &i;

    // return the size of the value in pointer 
    // the star is needed when accessing a value at 
    // an address in a pointer
    return sizeof(*ptr);
}

int getPointerToIntBytes(void){
    // declare a pointer to an int
    // the stare is needed when declaring a pointer 
    int *ptr;

    // get the address of the global variable i
    // and store it in the pointer 
    // the ampersand is needed when getting the address 
    // of a variable
    ptr = &i;

    // return the size of the pointer 
    // neither the star nor ampersand are needed 
    // when using an address in a pointer
    return sizeof(ptr);

}

// this function prints the address of a pointer to a double
// that stores NULL
void pointerToNull(void){
    // declare a pointer to a double
    // the stare is needed when declaring a pointer 
    double *ptr;

    // store NULL in point
    // NULL is an address where no data exixts
    ptr = NULL;

    // get the address of the global variable j
    // and store it in the pointer 
    // the ampersand is needed when getting the address 
    // of a variable
    ptr = &j;

    // chesck if pointer is NOT NULL 
    // neither the star nor ampersand are needed 
    // when using an address in a pointer
    // NOT NULL - true
    // NULL - False 
    if (ptr){
        // neither the star nor ampersand are needed 
        // when using an address in a pointer
        printf("The address of the pointer to a double that does not store NULL is %p.\n", ptr);
    } else {
        // neither the star nor ampersand are needed 
        // when using an address in a pointer
        printf("The address of the pointer to a double that does store NULL is %p.\n", ptr);
    }
}