#include<stdio.h>
#include<stdlib.h>
int main(){
    // for loop using continue jump Statement
    for (int i = 1; i <= 20; i++)
    {
        if(i==5 || i==10 || i==15){
            continue;
        }
        // if(i%2 != 0){
        //     continue;
        // }
        // if(i%2 == 0){
        //     continue;
        // }
        printf("Value of i = %d \n",i);
        
    }
     exit(0);
    printf("Dummy text");
}