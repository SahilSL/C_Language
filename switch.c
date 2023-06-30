#include<stdio.h>

int main(){
   int day;
   printf("Please enter day(1-7): ");
   scanf("%d",&day);

   switch (day){
   case 1: printf("The day is Monday"); 
           break;
   
   case 2: printf("The day is Tuesday"); 
           break;

   case 3: printf("The day is Wednesday"); 
           break;
   
   case 4: printf("The day is Thursday"); 
           break;
   
   case 5: printf("The day is Friday"); 
           break;
   
   case 6: printf("The day is Saturday");  
           break;

   case 7: printf("Sunday"); 
           break;

   default: printf("Unknown or Invalid ");
    break;
   }
   return 0;
}