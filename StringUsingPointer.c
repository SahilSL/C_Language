
#include<stdio.h>
#include<string.h>

void printstring(char arr[]);

int main(){
    char *canchange = "Hello world"; 
    puts(canchange);
    canchange = "World";
    puts(canchange);
    return 0;
}
