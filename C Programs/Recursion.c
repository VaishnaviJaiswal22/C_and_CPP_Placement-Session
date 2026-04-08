#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
    return 1;
    }else{
    return n * factorial(n-1); // recursive call
    } 
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num<0){
        printf("factorial is not defined for neagative numbers");
    }else{
        printf("Factorial of %d is %d \n",num,factorial(num));
    }
}