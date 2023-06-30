// char ch='A';
// fprintf(fptr, "%c", ch);

// char ch;
// fscanf(fptr, "%c", &ch)

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    // it will delete the text prensent in the file and add new data
    fprintf(fptr,"%c", 'M');
    fprintf(fptr,"%c", 'a');
    fprintf(fptr,"%c", 'n');
    fprintf(fptr,"%c", 'g');
    fprintf(fptr,"%c", 'o');
    
    fclose(fptr);
    
    return 0;
}