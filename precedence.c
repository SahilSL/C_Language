// *,/,%,+,-,=
#include<stdio.h>

int main(){
    int a = 4+9*10;
    printf("value of a = %d\n", a);

    int b = 4*3/5*8; //associativity (left to right calculation)
    printf("value of b = %d\n", b);
    
    int c = 5*2-2*3;
    printf("value of c = %d\n", c);

    int d = 5*2/2*3;
    printf("value of d = %d\n", d);

    int f = 5*(2/2)*3;
    printf("value of f = %d\n", f);

    int g = 5+2/2*3;
    printf("value of g = %d\n", g);

    return 0;
}