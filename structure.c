/*
A collection of values of different data types
examples:
for a student store the following -
    name ---> string
    rollno ---> int
    cgpa ---> float

it is user-defined
*/

#include <stdio.h>
#include<string.h>

struct student{
    int rollno;
    float cgpa;
    char name;
};

int main(){
    struct student s1;
    s1.rollno = 157;
    s1.cgpa = 9.93;
    s1.name = "sahil";
    //strcpy(s1.name, "Sahil");

    printf("student name = %c\n", s1.name);
    printf("student roll no. = %d\n", s1.rollno);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}

