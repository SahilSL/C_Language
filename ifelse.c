#include<stdio.h>

int main(){
   int age;
   printf("Please enter your age: ");
   scanf("%d",&age);

   if(age>18){
    printf("You can vote for election \n");
   } 

   else{
    printf("You can not vote for election \n");
   }
   return 0;
}