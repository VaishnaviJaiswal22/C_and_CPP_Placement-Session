#include<stdio.h>
int main(){
    int i , count = 1,sum = 0;
    for(i =1;count<=10;i++){
        if(i%2==0){
            sum += i;
            count++;
        }
    }
    printf("Value of sum of 10 even numbers = %d \n",sum);
}