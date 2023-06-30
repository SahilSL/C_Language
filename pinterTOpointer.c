// use * to get value
// use & to get address
#include<stdio.h>

int main(){
    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;
    return 0;
}