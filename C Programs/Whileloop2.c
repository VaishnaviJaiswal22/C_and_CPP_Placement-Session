#include<stdio.h>
int main(){
    int start,end;
    printf("Enter the value of start and end:");
    scanf("%d%d",&start,&end);

    // print Capital Alphabet letter using ASCII value
    while(start<=end){
        printf("1. Value = %c  \n",start);
        start++;
    }


    // print Small  Alphabet letter using ASCII value
    start+=6;
    end+=32;
    while(start<=end){
        printf("2. Value = %c  \n",start);
        start++;
    }
}