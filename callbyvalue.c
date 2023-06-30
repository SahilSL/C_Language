#include<stdio.h>

void square(int n);

//not affect any value which declared inside main function
int main(){
    int number = 4;
    square(number);
    printf("Number = %d\n", number);
    return 0;
}

//call by value
//we pass value of variable as argument
void square(int n){
    n=n*n;
    printf("Square = %d\n", n );
}