#include<stdio.h>
#include<string.h>
int main(){
    char name[20],surname[20];
    printf("Enter name and surname:");
    scanf("%s%s",name,surname);

    printf("Name is %s and surname is %s \n",name,surname);

    // Count characters of string
    int len=strlen(surname);
    printf("Value of len = %d \n",len);

    // strcmp()->both strings are equal return 0 otherwise return another number
    printf("strcmp(name,surname)=%d \n",strcmp(name,surname));
    if(strcmp(name,surname)==0){
        printf("both strings are equal \n");
    }else{
        printf("both strings are not equal \n");
    }

    // strcat()-> concate 2 strings
    strcat(name," ");
    strcat(name,surname);
    printf("name is %s and surname is %s \n",name,surname);

    // strcpy()
    char newName[20];
    strcpy(newName,name);
    printf("name is %s and newName is %s \n",name,newName);
}