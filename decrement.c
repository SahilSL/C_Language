#include<stdio.h>

int main(){
    //decrement operator
    // --i - pre decrement
    // i-- - post decrement
    int i=5;
    printf("%d \n", i--); //use, then decrease
    printf("%d \n", i); //decremented value
 
    printf("%d \n", --i); //decrease, then use
    printf("%d \n", i); //decremented value

}