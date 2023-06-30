#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a, float b);

int main(){
    float a = 5.0;
    float b = 10.0;
    float radius = 5.0;
    float side = 8.0;

    printf("Area of retangle is: %f\n", rectanglearea(a,b));

    printf("Area of circle is: %f\n", circlearea(radius));

    printf("Area of square is: %f\n", circlearea(side));

    return 0;
}

float squarearea(float side){
    return side*side;
}

float circlearea(float radius){
    return 3.142*radius*radius;
}

float rectanglearea(float a, float b){
    return a*b;
}