#include<stdio.h>
int main(){
    float price[3];
    printf("Enter three prices: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price 1 with gst: %f\n", price[0]+(0.18*price[0]));

    printf("\nTotal price 2 with gst: %f\n", price[1]+(0.18*price[1]));

    printf("\nTotal price 3 with gst: %f\n", price[2]+(0.18*price[2]));
    
}