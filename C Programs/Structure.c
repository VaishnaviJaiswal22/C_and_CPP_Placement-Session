#include<stdio.h>
#include<string.h>
// create structure
struct stdInfo
{
   int stdID;
   char stdName[20];
   char stdClass[20];
};

int main(){
    // Structure Variables(Inctances of Structure)
    struct stdInfo sv1,sv2,sv3;

    sv1.stdID=1001;
    strcpy(sv1.stdName,"Vaishnavi Jaiswal");
    strcpy(sv1.stdClass,"CSE-B");
    
    sv2.stdID=1002;
    strcpy(sv2.stdName,"Aditya Sahu");
    strcpy(sv2.stdClass,"CSE-A");

    sv3.stdID=1003;
    strcpy(sv3.stdName,"Dipanjali Pawar");
    strcpy(sv3.stdClass,"CSE(ICB)");

    printf("ID = %d , Name = %s and Class = %s \n",sv1.stdID,sv1.stdName,sv1.stdClass);
    printf("ID = %d , Name = %s and Class = %s \n",sv2.stdID,sv2.stdName,sv2.stdClass);
    printf("ID = %d , Name = %s and Class = %s \n",sv3.stdID,sv3.stdName,sv3.stdClass);
}
