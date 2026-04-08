#include<stdio.h>
int main(){

    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");

    int money;
    printf("Enter the amount of money you have: Rs.");
    scanf("%d", &money);

    if (money >= 5000) {
        printf("You can go on an international trip!\n");
    }
    else if (money<5000 && money >= 3000) {
        printf("You can visit a hill station.\n");
    }
    else if (money<3000 && money >= 2000) {
        printf("You can go on a weekend trip to a nearby city.\n");
    }
    else if (money<2000 && money >= 1000) {
        printf("You can enjoy a movie and dine out.\n");
    }
    else if (money<1000 && money >= 500) {
        printf("You can go for snacks or a short hangout with friends.\n");
    }
    else {
        printf("Better to stay home and save more money.\n");
    }
}