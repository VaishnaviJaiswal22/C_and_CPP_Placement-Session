#include<stdio.h>

void swap(int  a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("inside swapping function: a=%d and b=%d.\n");
}

void swapUsingPointer(int *p , int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int x , y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("before swapping: x=%d and y = %d \n",x,y);
    //swap(x,y);
    swapUsingPointer(&x,&y);
    printf("After Swapping: x=%d and y = %d \n",x,y);
}