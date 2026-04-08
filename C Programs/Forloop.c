#include<stdio.h>
int main(){
    for(int i = 1; i<=25 ; i++){
        printf("Value of i = %d \n",i);
    }

    // Print the table of num
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(int i = 1; i<=10 ; i++){
        printf(" Value of %d * %d = %d \n",num,i,num*i);
    }

    // print capital A to Z using ASCII value
    for(int i = 0; i<26 ;i++){
        printf("value = %c \n",i+65);
    }
    
    // print capital a to z using ASCII value
    for(int i = 0; i<26 ;i++){
        printf("value = %c \n",i+90);
    }

}