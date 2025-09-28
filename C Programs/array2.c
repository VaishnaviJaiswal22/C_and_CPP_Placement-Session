#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    // create arrays of that size
    int intarr[size];
    char chararr[size];

    // take input from user
    for(int i = 0 ;i<size ; i++){
        printf("Enter the %d value in intarr \n",i);
        scanf("%d",&intarr[i]);
    }
    for(int i = 0 ;i<size ; i++){
        printf("Enter %d value in chararr \n",i);
        scanf("%s",&chararr[i]);
    }

    // print arrays
    for(int i = 0;i<size;i++){
        printf("Value of arr[%d] = %d\n",i,intarr[i]);
    }
    for(int i = 0; i<size ; i++){
        printf("%c",chararr[i]);
    }
}