// When a function calls itselfs then it is called as recursion
#include<stdio.h>

void printhw(int count);

int main(){
    printhw(10);
    return 0;
}

//recursive function
void printhw(int count) {
    if(count==0){
        return;
    }
    printf("recursive function \n");
    printhw(count-1);
}