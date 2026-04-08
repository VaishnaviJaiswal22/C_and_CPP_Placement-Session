#include<stdio.h>
int main(){

    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");
    
    // Bitwise Operator -> &,|,^,~
    int a, b ;
    printf("Enter the value of a and b in binary form (0/1):");
    scanf("%d%d",&a,&b);

    printf("Value of a&b = %d \n",a&b);
    printf("Value of a|b = %d \n",a|b);
    printf("Value of a^b = %d \n",a^b);
    printf("Value of ~a = %d and ~b = %d \n",~a,~b);

    // << , >>
    int c = 6;
    printf("Value of c<<2 = %d \n",c<<2);
    printf("Value of c>>2 = %d \n",c>>2);
    
}