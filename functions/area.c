#include<stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length,float breadth);
int main(){
    float side;
    float radius;
    float length,breadth;
    printf("Enter the side of square :\n");
    scanf("%f",&side);
    squareArea(side);

    printf("Enter the radius of circle :\n");
    scanf("%f",&radius);
    circleArea(side);

    printf("Enter the length and breadth of Reactangle :\n");
    scanf("%f %f",&length,&breadth);
    rectangleArea(length,breadth);

}

float squarearea(float side){
    float area=side*side;
    return area;
    printf("Area of Square=%f\n",area);
}
float reactArea(float length,float breadth){
    float area=length*breadth;
    return area;
    printf("Area of Reactangle=%f\n",area);
}
float circleArea(float radius){
    float area=3.14*radius*radius;
    return area;
    printf("Area of circle=%f\n",area);
}