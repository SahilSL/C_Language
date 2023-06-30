//takes no. of bytes to be allocated and returns a pointer of type void

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    //memory allocate at run time
    ptr = (float*)malloc(5*sizeof(float));

    ptr[0] = 1;
    ptr[1] = 10;
    ptr[2] = 100;
    ptr[3] = 1000;
    ptr[4] = 10000;

    for(int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }
}