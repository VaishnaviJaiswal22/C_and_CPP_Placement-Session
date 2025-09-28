#include<stdio.h>
int main(){
    // create array of int type
    int arr[6] = {100,97,95,93,91,80};

    for(int i = 0;i<6;i++){
        printf("Address of arr[%d] = %p \n",i,&arr[i]);
        printf("Value of arr[%d] = %d\n",i,arr[i]);
    }

    // Create character array
    char chararr[5] = {'R','A','M','A','N'};
    for(int i = 0; i<5 ; i++){
        printf("%c",chararr[i]);
    }
    printf("\n");
}