#include<stdio.h>

int main(){
   int age;
   printf("Please enter your age: ");
   scanf("%d",&age);

   age>=18 ? printf("adult") : printf("Not Adult");
   return 0;
}