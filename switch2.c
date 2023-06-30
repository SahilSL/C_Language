#include<stdio.h>

int main(){
   char day;
   printf("Please enter day(like: m): ");
   scanf("%s",&day);

   switch (day){
   case 'm': printf("The day is Monday"); 
           break;
   
   case 't': printf("The day is Tuesday"); 
           break;

   case 'w': printf("The day is Wednesday"); 
           break;
   
   case 'T': printf("The day is Thursday"); 
           break;
   
   case 'f': printf("The day is Friday"); 
           break;
   
   case 's': printf("The day is Saturday");  
           break;

   case 'S': printf("Sunday"); 
           break;

   default: printf("Unknown or Invalid ");
    break;
   }
   return 0;
}