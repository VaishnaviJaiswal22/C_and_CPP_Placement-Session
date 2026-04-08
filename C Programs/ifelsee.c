#include<stdio.h>
int main(){
    //nested if
    int travel;
    Insertmarks:
    printf("Enter the distance you want to travel: \n");
    scanf("%d",&travel);
    
    if(travel<0){
        printf("enter the distance greater then 0. \n");
        goto Insertmarks;
    }else if(travel>=10 && travel<=15){
        printf("the price is 10rs  %d  \n",travel);
    }else if(travel>16 && travel<=20){
        printf("the price is 20rs %d  \n",travel);
    }else if(travel>=21 && travel<=25){
        printf("the price is 30rs %d  \n",travel);
    }else if(travel>=30 && travel<=40){
        printf("the price is 50rs %d  \n",travel);
    }else if(travel>=41 && travel<=60){
        printf("the price is 65rs %d \n", travel);
    }else if(travel>=61 && travel<=80){
        printf("the price is 85rs %d \n",travel);
    }else if(travel>=81 && travel<=100){
        printf("the price is 100rs %d \n",travel);
    }else if(travel>=101 && travel<=150){
        printf("the price is 150rs %d \n",travel);
    }
    else {
        printf("something went wrong, please try again.");
    }
}
