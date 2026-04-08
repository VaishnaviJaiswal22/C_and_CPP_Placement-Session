#include<stdio.h>
int main(){
    
    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");

    int choice;
    //Input two numbers
    float a,b;
    printf("Enter the value of a and b: \n");
    scanf("%f%f",&a,&b);

    printf("\n Choose an Operation: \n");
    printf("1.Addition(+) \n");
    printf("2.Substraction(-) \n");
    printf("3.Multiplication(*) \n");
    printf("4.Division(/) \n");
    printf("Enter your choice(1-4): \n");
    scanf("%d",&choice);

    // Switch Case
    switch (choice)
    {
    case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

}