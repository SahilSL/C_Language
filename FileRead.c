// check if a file exists before reading from it

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if(fptr == NULL){
        printf("file does not exist\n");
    }else{
        fclose(fptr);
    }
    return 0;
}