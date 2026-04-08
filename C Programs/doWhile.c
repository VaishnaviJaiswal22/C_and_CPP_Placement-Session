#include<stdio.h>
int main(){
    int i;
    printf("Enter value of i:");
    scanf("%d",&i);

    do{
        printf("Value of i = %d \n",i);
        i++;
    }while(i<15);
}