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

struct player{
    char name[20];
    int score;
};

int main(){
    struct player player1;
    struct player player2;

    strcpy(player1.name, "sahil");
    player1.score = 100;

    strcpy(player2.name, "sid");
    player2.score = 99;

    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Name: %s\n", player2.name);
    printf("Score: %d\n", player2.score);

    return 0;
}

