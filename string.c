//string is a sequence of characters
/*
INITIALISING STRING:
1. char name[]={'s','a','h','i','l','\0'};
where \0 is null character

2. char name[]={"sahil"};
*/


#include<stdio.h>
#include<string.h>

void printstring(char arr[]);

int main(){
    char firstname[] = "Sahil";
    char lastname[]= "Lokhande";
    printstring(firstname);
    printstring(lastname);

    return 0;
}

void printstring(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}