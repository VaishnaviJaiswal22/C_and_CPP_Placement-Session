#include<stdio.h>

// Create a function
float add(float a, float b){
    float result = a + b;
    return result;
}

void add1(float a, float b){
    float result = a + b;
    printf("Value of a + b is %f \n",result);
}

float areaofSquare(float b, float h){
    return b*h;
}

float areaofTrapezium(float s1, float s2, float h){
    return ((s1+s2)*h)/2;
}

float areaofParallelogram(float b,float ph){
    return b*ph;
}

float areaofRhombus(float l,float h){
    return (l*h)/2;
}

float areaofKite(float l,float h){
    return (l*h)/2;
}

// declare the function which we define after the main function
float areaofTriangle(float b, float ph);

int main(){
    float x,y,z;
    printf("Enter the value of x,y and z: ");
    scanf("%f%f%f",&x,&y,&z);

    printf("Value of %f + %f is %f \n",x,y,add(x,y));
    printf("Value of %f + %f + %f is %f \n",x,y,z,z+add(x,y));
    add1(x,y);

    float areaofsquare = areaofSquare(x,y);
    printf("Area of Square(base = %f , height = %f) = %f \n",x,y,areaofsquare);

    float areaoftriangle = areaofTriangle(x,y);
    printf("Area of Triangle(base = %f , Pythagorus height = %f) = %f \n",x,y,areaoftriangle);

    float areaoftrapezium = areaofTrapezium(x,y,z);
    printf("Area of Trapezium(side1 = %f, side2 = %f , height = %f) = %f \n",x,y,z,areaoftrapezium);

    float areaofparallelogram = areaofParallelogram(x,y);
    printf("Area of Parallelogram(base = %f , Pythagorus height = %f) = %f \n",x,y,areaofparallelogram);

    float areaofrhombus = areaofRhombus(x,y);
    printf("Area of Rhombus(length = %f , height = %f) = %f \n",x,y,areaofrhombus);

    float areaofkite = areaofKite(x,y);
    printf("Area of Kite(length = %f , height = %f) = %f \n",x,y,areaofkite);

    // Function inside main Function
    float sub(float a,float b){
        return a-b;
    }
    printf("Value of %f - %f is %f \n",x,y,sub(x,y));

}

float areaofTriangle(float b,float ph){
    return (b*ph)/2;
}