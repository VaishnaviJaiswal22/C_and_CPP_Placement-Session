#include<stdio.h>
int main(){
    int outerSize,innerSize;
    printf("Enter OuterSize and InnerSize of Array:");
    scanf("%d%d",&outerSize,&innerSize);

    int arr[outerSize][innerSize];
    // Take input from user
    for(int i = 0 ; i<outerSize ; i++){
        for (int j = 0; j < innerSize; j++)
        {
           printf("Enter Value of arr[%d][%d]: \n",i,j);
           scanf("%d",&arr[i][j]);
        }
        
    }

    // Print 2D Array
    for(int i = 0 ; i<outerSize ; i++){
        for (int j = 0; j < innerSize; j++)
        {
           printf("Value of arr[%d][%d] = %d \n",i,j,arr[i][j]);
        }
        
    }
}