#include<stdio.h>
int main(){
    int low,heigh,i,isPrime;
    printf("Enter two numbers(Interval):");
    scanf("%d%d",&low,&heigh);

    printf("Prime Numbers between %d and %d. \n",low ,heigh);

    while(low<=heigh){
        isPrime = 0;
        if(low<=1){
            low++;
            continue;
        }
        for(i = 2 ; i<=low/2 ; i++){
            if(low%i==0){
                isPrime = 1;
                break;
            }
        }
        if(isPrime==0){
            printf("%d ",low);
        }
        low++;
    }
}