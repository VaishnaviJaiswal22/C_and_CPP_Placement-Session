#include<stdio.h>
int main(){
    int a=10, b=20, c=30, d=40;

    int *arr[4]={&a,&b,&c,&d};

    for(int i = 0; i<4 ; i++){
        printf("Value of %d = %p and Value stored at %d Address = %d \n",i,arr[i],i,*arr[i]);
    }
}