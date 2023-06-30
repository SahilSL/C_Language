//gets (outdated): input string with multiple words however scanf take only start word
// puts: output the string

//fgets:

// takes full name by help of fgets

#include<stdio.h>
#include<string.h>

void printstring(char arr[]);

int main(){
    char str[100];
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}

