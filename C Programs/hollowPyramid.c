#include<stdio.h>
int main(){
    int row = 5;
    //outer loop
    for(int i = 0; i<row ; i++){
        // Inner loop for space
        for(int j = 0; j<2*(row-i)-1 ; j++){
            printf(" ");
        }
        // Inner loop for *
        for(int k = 0; k<2*i+1 ; k++){
            if(k==0 || k==2*i || i==row-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");

    }
}