#include<stdio.h>
int main(){
    //Swapping using third variable
    int a , b , temp;

    //Input two numbers
    printf("Enter first number(a): \n");
    scanf("%d",&a);
    printf("Enter second number(b): \n");
    scanf("%d",&b);

    //Display before swapping
    printf("Before Swapping: a = %d , b = %d \n",a,b);

    //Swapping 
    temp = a;
    a = b;
    b = temp;

    //Display after swapping
    printf("After Swapping: a = %d , b = %d \n",a,b);

    //Swapping without using third variable
    int c,d;
    //Input two numbers
    printf("Enter first number(c): \n");
    scanf("%d",&c);
    printf("Enter second number(d): \n");
    scanf("%d",&d);

    //Display before swapping
    printf("Before Swapping: c = %d , d = %d \n",c,d);

    //Swapping 
    c = c + d;
    d = c - d;
    c = c - d;

    //Display after swapping
    printf("After Swapping: c = %d , d = %d \n",c,d);
}