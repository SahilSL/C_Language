#include<stdio.h>

int main(){
    int marks;
    printf("Please enter your marks: ");
    scanf("%d",&marks);

    if (marks>=30 && marks<=100){
        printf("Congratulations !!! your are pass");
    }
    else if(marks>100){
        printf("please enter valid marks between range 1 to 100 only");
    }
    else{
        printf("oops !!! you are not pass");
    }

    return 0;
}