#include<stdio.h>
int main(){
    int a=20;
    int *ptr = &a;

    printf("Value of a = %d \n",a);
    printf("Value of ptr = %p \n",ptr);
    printf("Value of *ptr = %d \n",*ptr);
    printf("Value of &a = %p \n",&a);
}