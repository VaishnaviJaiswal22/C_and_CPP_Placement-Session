#include<stdio.h>
int main(){
    char alphabet ;
    printf("Enter the value of alphabet: \n");
    scanf("%c",&alphabet);
    
    switch (alphabet)
    {
    case 'A': printf("%c is Vowel",alphabet);
        break;
    case 'E':printf("%c is Vowel",alphabet);
        break;
    case 'I':printf("%c is Vowel",alphabet);
        break;
    case 'O':printf("%c is Vowel",alphabet);
        break;
    case 'U':printf("%c is Vowel",alphabet);
        break;
    case 'a':printf("%c is Vowel",alphabet);
        break;
    case 'e':printf("%c is Vowel",alphabet);
        break;
    case 'i':printf("%c is Vowel",alphabet);
        break;
    case 'o':printf("%c is Vowel",alphabet);
        break;
    case 'u':printf("%c is Vowel",alphabet);
        break;
    default:printf("%c is not a Vowel",alphabet);
        break;
    }
}
