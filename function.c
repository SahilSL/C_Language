//Function is a block of code that performs particular tasks for
//take argumeny--->do work--->return result
//it can be used multiple times
//increase code reusability

#include <stdio.h>
//declaratiom
void print();

int main(){
    print();
    print();
    return 0;
}

//function definition
void print(){
    printf("Hello World !!!\n");
}

/*property------>
1. execution always starts from main
2. a function gets called directly or indirectly from main
3. there can be multiple function in a program
*/