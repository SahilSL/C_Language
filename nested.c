#include<stdio.h>

int main(){
   int num;
   printf("Please enter any number: ");
   scanf("%d",&num);

   if(num>=0){
        printf("This is positive number \n");
        if (num % 2 == 0){
                printf("This is even number \n");
        }else {
                printf("This is odd number \n");
        }
   }   
   else{
        printf("This is negative number \n");
   }
   return 0;
} 