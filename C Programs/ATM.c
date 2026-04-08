#include<stdio.h>
#include<stdlib.h>

void ATM(){
    int pin = 1234;

    int Upin;
    enterPin:
    printf("enter 4 digit pin number to access our services:");
    scanf("%d",&Upin);

    if(Upin==pin){
        int balance = 100000;
        int ch;
        insertAction:
        printf("Welcome in our Dashboard \n  Please Enter your Choice: \n Press 1 to check balance \n Press 2 to Withdraw Money \n Press 3 For Money Deposit \n Press 4 to Change Pin \n Press 5 for exit \n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Your bank Balance is %d \n",balance);
        }else if(ch==2){
            int amount;
            printf("Enter amount you want to withdraw:");
            scanf("%d",amount);
            if(amount<=balance){
                printf("withraw amount is %d , and remaining balance is %d \n",amount,balance-amount);
                balance -= amount;
            }else{
                printf("Insufficient balance %d \n",balance);
            }
        }else if(ch==3){
            int money;
            printf("Enter amount you want to deposit:");
            scanf("%d",&money);
            printf("Money successfully Deposited and new balance is %d \n",balance+money);
            balance += money;
        }else if(ch==4){
            printf("Enter new pin:");
            scanf("%d",&pin);
            printf("Pin changed successfully please login again with nwe pin number.\n");
            goto enterPin;
        }else if(ch==5){
            printf("Thankyou for visit our ATM \n");
            exit(0);
        }else{
            printf("PLease choose correct option number.\n");
            goto insertAction;
        }

    }else{
        printf("Incorrect pin number please enter corrrect pin.\n");
        goto enterPin;
    }
}

int main(){
    ATM();
}
