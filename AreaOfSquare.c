//area of square
#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of the sides: "); 
    scanf("%d",&a);

    int side = a*a;
    printf("The area of the square: %d",side);

    return 0;
}