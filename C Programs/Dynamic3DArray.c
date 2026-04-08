#include<stdio.h>
int main(){
    int arr[2][2][2];

    // take input from user
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter the value of arr[%d][%d][%d] =  \n",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
            
        }
        
    }

    // show 3d array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
               printf("Value of arr[%d][%d][%d] = %d \n",i,j,k,arr[i][j][k]) ;
            }
            
        }
        
    }
    
}