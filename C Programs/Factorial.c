#include<stdio.h>
int main(){
    int num,factorial = 1;
    printf("Enter the value of num:");
    scanf("%d",&num);

    for(int i = num ; i>=1 ; i--){
        factorial *= i;
    }

    printf("Factorial of %d is %d.",num,factorial);
}