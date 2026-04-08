#include<stdio.h>
int main(){

    printf("C Programming \n");
    printf("Vaishnavi Jaiswal \n");
    printf("\n");
    // char
    char char_min = -128;
    char char_max = 127;
    printf("char: size = %ld bytes, min = %d, max = %d\n", sizeof(char), char_min, char_max);

    // unsigned char
    unsigned char uchar_min = 0;
    unsigned char uchar_max = 255;
    printf("unsigned char: size = %ld bytes, min = %d, max = %d\n", sizeof(unsigned char), uchar_min, uchar_max);

    // short
    signed short  int ssint_min = -32768;
    signed short  int ssint_max = 32767;
    printf("signed short int: size = %ld bytes, min = %d, max = %d\n", sizeof(short), ssint_min, ssint_max);

    // unsigned short
    unsigned short int usint_min = 0;
    unsigned short int usint_max = 65535;
    printf("unsigned short int : size = %ld bytes, min = %d, max = %d\n", sizeof(unsigned short), usint_min, usint_max);

    // int
    int int_min = -2147483648;
    int int_max = 2147483647;
    printf("int: size = %ld bytes, min = %d, max = %d\n", sizeof(int), int_min, int_max);

    // unsigned int
    unsigned int uint_min = 0;
    unsigned int uint_max = 4294967295U;
    printf("unsigned int: size = %ld bytes, min = %u, max = %u\n", sizeof(unsigned int), uint_min, uint_max);

    // long
    long int lint_min = -2147483648L;
    long int lint_max = 2147483647L;
    printf("long int : size = %ld bytes, min = %ld, max = %ld\n", sizeof(long), lint_min, lint_max);

    // unsigned long
    unsigned long int ulint_min = 0;
    unsigned long int ulint_max = 4294967295UL;
    printf("unsigned long int: size = %ld bytes, min = %lu, max = %lu\n", sizeof(unsigned long), ulint_min, ulint_max);

    // long long
    long long llong_min = -9223372036854775807LL - 1;
    long long llong_max = 9223372036854775807LL;
    printf("long long: size = %ld bytes, min = %lld, max = %lld\n", sizeof(long long), llong_min, llong_max);

    // unsigned long long
    unsigned long long ullong_min = 0;
    unsigned long long ullong_max = 18446744073709551615ULL;
    printf("unsigned long long: size = %ld bytes, min = %llu, max = %llu\n", sizeof(unsigned long long), ullong_min, ullong_max);

    // float (approximate range) in Scientific notation
    float float_min = -3.4e38;
    float float_max = 3.4e38;
    printf("float: size = %ld bytes, min = %e, max = %e\n", sizeof(float), float_min, float_max);

    // double (approximate range)
    double double_min = -1.7e308;
    double double_max = 1.7e308;
    printf("double: size = %ld bytes, min = %e, max = %e\n", sizeof(double), double_min, double_max);

    // long double (approximate range)
    long double ldouble_min = -1.7e308;
    long double ldouble_max = 1.7e308;
    printf("long double: size = %ld bytes, min = %e, max = %e\n", sizeof(long double), ldouble_min, ldouble_max);

    
}