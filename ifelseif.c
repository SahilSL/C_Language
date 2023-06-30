#include<stdio.h>

int main(){
   int age;
   printf("Please enter your age: ");
   scanf("%d",&age);

   if(age>=18){
    printf("You can vote for election \n");
   } 

   else if(age>13 && age<17){
    printf("Bro! don't waste your time go and study hard... \n");
   }

   else{
    printf("You can not vote for election \n");
   }
   return 0;
}