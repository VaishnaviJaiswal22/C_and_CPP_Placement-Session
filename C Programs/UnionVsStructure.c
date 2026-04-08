#include<stdio.h>
#include<string.h>
union stdInfo
{
    int stdID;
    char stdName[20];
    int stdAge;
};

struct stdInfo1
{
    int stdID;
    char stdName[20];
    int stdAge;
};

int main(){
    union stdInfo Uinfo;
    Uinfo.stdID=1001;
    strcpy(Uinfo.stdName,"Vaishnavi Jaiswal");
    Uinfo.stdAge=22;

    struct stdInfo1 Sinfo;
    Sinfo.stdID=1002;
    strcpy(Sinfo.stdName,"Vinay Jaiswal");
    Sinfo.stdAge=24;

    printf("Union : Id=%d , name = %s and age=%d \n",Uinfo.stdID,Uinfo.stdName,Uinfo.stdAge);
    
    printf("Structure : Id=%d , name = %s and age=%d \n",Sinfo.stdID,Sinfo.stdName,Sinfo.stdAge);
}
