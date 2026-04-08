#include<stdio.h>
int main(){
    int a , square;

    //Input the number
    printf("Enter the value of a: \n");
    scanf("%d",&a);

    //Calculate Square
    square = a * a;

    //Display Square
    printf("Square of %d is %d \n",a,square);
}