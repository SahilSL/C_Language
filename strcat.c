// concatenates first string with second string

#include<stdio.h>
#include<string.h>

int main(){
    char firststr[100] = "oldstr";
    char secstr[100] = "newstr";
    strcat(firststr, secstr);
    puts(firststr);
        

    return 0;
}
