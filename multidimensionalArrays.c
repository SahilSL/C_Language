//2D array:
#include<stdio.h>
int main(){
    int marks[2][3]; //_ _ _||_ _ _
    //first students, 1st subj marks
    marks[0][0] = 90;
    //first students, 2nd subj marks
    marks[0][1] = 80;
    //first students, 3rd subj marks
    marks[0][2] =70;

    //second students, 1st subj marks
    marks[1][0] =10;
    //second students, 2nd subj marks
    marks[1][1] =50;
    //second students, 3rd subj marks
    marks[1][2] =60;

    printf("%d", marks[0][0]);
}