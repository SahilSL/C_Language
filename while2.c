/* while(condition){
    do someething...
}*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    int i=0;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
}