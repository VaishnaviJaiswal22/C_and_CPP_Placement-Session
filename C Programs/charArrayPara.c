#include<stdio.h>

void charArrayParameter(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        // arr[i] += 2;
        arr[i] -= 1;
    }
    
}

int main(){
    char arr[5] ={'A','E','I','O','U'};

    printf("------Before------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ",arr[i]);
    }
    printf("\n");

    charArrayParameter(arr,5);

     printf("------After------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ",arr[i]);
    }
    
}