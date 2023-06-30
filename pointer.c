// a variable that stores the memory address of another variables
// use * to get value
// use & to get address
#include<stdio.h>

int main(){
    int age = 21;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);
    return 0;
}
