//File is a (hidden) structure that needs to be created for opening a  file.
// A FILE ptr that points to this structure and is used to access the files.

// FILE *ptr

//OPENING A FILE --->
/*
FILE *ptr;
fptr = fopen("filename.txt", mode);
mode may be read or write or anything else
*/

//CLSOING A FILE --->
// fclose(fptr);

/*
FILE OPENING MODES:
"r" --> open to read
"rb" --> open to read in binary
"w" --> open to write
"wb" --> opwn to write in binary
"a" --> open to append
*/

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    fclose(fptr);
    return 0;
}
