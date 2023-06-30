// pointer can be incremented and decremented
#include <stdio.h>

int main(){
    int age = 21;
    int *ptr = &age;

    printf("ptr = %u\n",ptr);
    ptr++; // increment by int size ie.4
    printf("ptr = %u\n", ptr);
    ptr--; // decrement by int size ie.4
    printf("ptr = %u\n", ptr);
    return 0;
}