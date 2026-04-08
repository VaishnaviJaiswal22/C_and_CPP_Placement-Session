#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *arrptr=&arr[0];

    for(int i = 0; i<5 ; i++){
        printf("Value stored at Address %p is %d \n",(arrptr + i), *(arrptr + i));
    }
}