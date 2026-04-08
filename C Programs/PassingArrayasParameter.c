#include<stdio.h>

void doublearray(int arr[],int size){
    for(int i = 0; i<size ; i++){
        arr[i] *= 2;
    }
}

int main(){
    int arr[5]={10,20,30,40,50};

    printf("------Before------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    doublearray(arr,5);

     printf("------After------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}