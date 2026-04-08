#include<stdio.h>
int main(){
    int i = 1;
    do{
        int j = 1;
        do{
            printf("# ");
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
}