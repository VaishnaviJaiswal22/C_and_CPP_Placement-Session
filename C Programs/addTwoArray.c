#include<stdio.h>
int main(){
    int size1,size2,sum;
    printf("Enter size of both arrays :");
    scanf("%d%d",&size1,&size2);

    int arr1[size1],arr2[size2];
     for(int i = 0 ;i<size1 ; i++){
        printf("Enter %d value in arr1 \n",i);
        scanf("%d",&arr1[i]);
     }    
     for(int i = 0 ;i<size2 ; i++){
        printf("Enter %d value in arr2 \n",i);
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < size1 || i < size2; i++)
    {
        sum= arr1[i] + arr2[i];
        printf("%d ",sum);
    }

    
    
}