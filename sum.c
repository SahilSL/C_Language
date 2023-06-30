#include<stdio.h>

int main(){
    int a;
    int b;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    int sum =a+b;
    printf("The sum of values of a and b: %d",sum);
    return 0;
}