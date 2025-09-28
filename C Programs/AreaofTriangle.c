#include<stdio.h>
int main(){
    float base , height , Area;

    //Input base and height
    printf("Enter base of the triangle: \n");
    scanf("%f",&base);
    printf("Enter height of the triangle: \n");
    scanf("%f",&height);

    //Calculate Area
    Area = 0.5 * base * height;

    //Display Area of Teiangle
    printf("Area of Triangle is %.2f " , Area);
}