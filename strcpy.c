//copy value of old string to new string

#include<stdio.h>
#include<string.h>

int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr, oldstr);
    puts(newstr);
        

    return 0;
}
