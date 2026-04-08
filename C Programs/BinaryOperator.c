#include<stdio.h>

int main(){

    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");
    
    int a,b,c;
    printf("Enter value of a , b, and c:");
    scanf("%d%d%d",&a,&b,&c);

    // Arithmetic Operator -> +,-,*,/,%
    printf("Value of a+b = %d \n",a+b);
    printf("Value of a-b = %d \n",a-b);
    printf("Value of a*b = %d \n",a*b);
    printf("Value of a/b = %d \n",a/b);
    printf("Value of a mod b = %d \n",a%b);

    printf("\n");

    // Relational Operator -> <,<=,>,>=,==,!=
    printf("Value of a<b = %d \n",a<b);
    printf("Value of a<=b = %d \n",a<=b);
    printf("Value of a>b = %d \n",a>b);
    printf("Value of a>=b = %d \n",a>=b);
    printf("Value of a==b = %d \n",a==b);
    printf("Value of a!=b = %d \n",a!=b);

    printf("\n");

    // Logical Operator -> &&,||,!
    printf("Value of (a>b && a>c) = %d \n",(a>b && a>c));
    printf("Value of (a>b || a>c) = %d \n",(a>b || a>c));
    printf("Value of !(a>b && a>c) = %d \n",!(a>b && a>c));

}