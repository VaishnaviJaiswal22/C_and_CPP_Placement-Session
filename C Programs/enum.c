#include<stdio.h>

enum EmergencyNumber{
    Police=100,
    Fire=101,
    Medical_Helpline=108,
    CM_Helpline=181,
    Electriity=1912
};

enum ContactDirectory{
    Ram_Sharma=9898989898,
    Mohan_Verma=7878787878
};

enum Week{
    Sun=100,Mon,Tues,Wed=10,Thurs,Fri,Sat
};

int main(){
     enum EmergencyNumber en1,en2;
     en1=CM_Helpline;
     printf("Value of en1=%d \n",en1);

     enum ContactDirectory cd1;
     cd1=Mohan_Verma;
     printf("Value of cd1=%ld \n",cd1);

     enum Week day;
     day=Fri;
     printf("Value of day = %d \n",day);
}