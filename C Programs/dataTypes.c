#include<stdio.h>
int  main(){
    // Data Types
    // int DataType
    int a = 20;
    printf("Value of a = %d \n",a);
    printf("Size of a = %ld bytes \n",sizeof(a));

    //float DataType
    float pi = 3.14159265359;
    printf("Value of pi = %f \n",pi);
    printf("Value of pi = %.2f \n",pi);
    printf("Size of pi = %ld bytes \n",sizeof(pi));
 
    //char DataType
    char c ='A';
    printf("Value of c = %c \n",c);
    printf("Value of c = %d \n",c);
    printf("Size of c = %ld bytes \n",sizeof(c));

    //double DataType
    double d = 3.102030405060123;
    printf("Value of d = %lf \n",d);
    printf("Value of d = %.15f \n",d);
    printf("Size of d = %ld bytes \n",sizeof(d));

    //void(use as return type)
    printf("Size of void = %ld bytes \n",sizeof(void));


}