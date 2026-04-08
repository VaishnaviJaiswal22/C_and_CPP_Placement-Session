#include<stdio.h>
int main(){
    int a = 20;
    int b = 10;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Unary Operation
    printf("Value of ++(*ptr1) = %d \n",++(*ptr1));
    printf("Value of --(*ptr1) = %d \n",--(*ptr1));
    printf("Value of ++(*ptr2) = %d \n",++(*ptr2));
    printf("Value of --(*ptr1) = %d \n",--(*ptr2));

    // Arithmetic Operation
    printf("Value of *ptr1 + *ptr2 = %d \n",*ptr1 + *ptr2);
    printf("Value of *ptr1 - *ptr2 = %d \n",*ptr1 - *ptr2);
    printf("Value of *ptr1 * *ptr2 = %d \n",*ptr1 * *ptr2);
    printf("Value of *ptr1 / *ptr2 = %d \n",*ptr1 / *ptr2);
    printf("Value of *ptr1 mod *ptr2 = %d \n",*ptr1 % *ptr2);

    // Relational Operator
    printf("Value of *ptr1 < *ptr2 = %d \n",*ptr1 < *ptr2);
    printf("Value of *ptr1 <= *ptr2 = %d \n",*ptr1 <= *ptr2);
    printf("Value of *ptr1 > *ptr2 = %d \n",*ptr1 > *ptr2);
    printf("Value of *ptr1 > *ptr2 = %d \n",*ptr1 >= *ptr2);
    printf("Value of *ptr1 == *ptr2 = %d \n",*ptr1 == *ptr2);
    printf("Value of *ptr1 != *ptr2 = %d \n",*ptr1 != *ptr2);
}