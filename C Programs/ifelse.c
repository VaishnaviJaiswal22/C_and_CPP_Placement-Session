#include<stdio.h>
int main(){
    //nested if
    int marks;
    Insertmarks:
    printf("Enter the value of marks: \n");
    scanf("%d",&marks);
    
    if(marks<0 || marks>100){
        printf("Invalid Marks : please enter marks between 0 and 100.\n");
        goto Insertmarks;
    }else if(marks>=0 && marks<33){
        printf("Student failed , baecause marks is %d  \n",marks);
    }else if(marks>33 && marks<45){
        printf("Student passed in 3rd division , baecause marks is %d  \n",marks);
    }else if(marks>=45 && marks<60){
        printf("Student passed in 2nd division , baecause marks is %d  \n",marks);
    }else if(marks>=60 && marks<100){
        printf("Student passed in 1st division , baecause marks is %d  \n",marks);
    }else {
        printf("Something went wrong , please try again.");
    }
}