// use * to get value
// use & to get address
#include<stdio.h>

int main(){
    int age = 21;
    int *ptr = &age;

    //address
    printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%p\n", ptr);
    printf("%u\n", ptr);

    printf("%p\n", &ptr);
    printf("%u\n", &ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));   
    return 0;
}
