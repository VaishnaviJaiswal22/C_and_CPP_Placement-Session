#include <stdio.h>

int main(){

    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");

    // Unary Perator -> ++,--
    // Pre-Increment
    int a = 20;
    printf("Pre-Increment of a(++a) = %d \n",++a);

    // Post-Increment
    int b = 20;
    printf("Post-Increment of b(b++) = %d \n",b++);
    printf("Value of b after post-increment = %d\n",b);

    // Pre-Decrement 
    int c = 20;
    printf("Pre-Decrement of c(--a) = %d \n",--c);

    // Post-Decrement
    int d = 20;
    printf("Post-Decrement of d(d--) = %d \n",d--);
    printf("Value of b after post-decrement = %d \n",d);
}