#include<stdio.h>
int main(){
    // create a 2D Array
    int arr[3][3]={{1,2,3},{10,20,30},{100,200,300}};

    // Print 2D Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of arr[%d][%d] = %d \n",i,j,arr[i][j]);
        }
        
    }

    // Create char Array
    char carr[3][3]={{'U','N','i'},{'V','E','R'},{'S','A','L'}};

    // Print 2D  char Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of carr[%d][%d] = %c \n",i,j,carr[i][j]);
        }
        
    }

    // create float type 2D array
    float farr[2][2]={{1.5,2.5},{3.5,4.5}};
     
    // Print 2D  char Array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value of carr[%d][%d] = %f \n",i,j,farr[i][j]);
        }
        
    }


    
}