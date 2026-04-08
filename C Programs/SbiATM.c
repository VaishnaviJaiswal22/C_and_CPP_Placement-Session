#include<stdio.h>
int main(){
    int choice,password;
    int correctPassword = 12345;
    float balance = 30000;
    float amount;

    printf("Enter the password:");
    scanf("%d",&password);

    if(password == correctPassword){
        printf("\n Login Successfully \n");

        // main menu
        printf("Welcome to SBI ATM \n");
        printf("1.Check bank balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Exit \n");
        printf("Enter your choice between 1 to 4: ");
        scanf("%d",&choice);

        // Step 2: SBI ATM Operations
        if(choice == 1) {
            printf("Your current balance is Rs.%.2f\n", balance);
        }
        else if(choice == 2) {
            printf("Enter amount to deposit: Rs.");
            scanf("%f", &amount);

            if(amount > 0) {
                balance += amount;
                printf("Rs.%.2f deposited successfully. New Balance: Rs.%.2f\n", amount, balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
        }
        else if(choice == 3) {
            printf("Enter amount to withdraw: Rs.");
            scanf("%f", &amount);

            if(amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Rs.%.2f withdrawn successfully. Remaining Balance: Rs.%.2f\n", amount, balance);
            } else {
                printf("Insufficient balance or invalid amount.\n");
            }
        }
        else if(choice == 4) {
            printf("Thank you for using SBI ATM. Goodbye!\n");
        }
        else {
            printf("Invalid choice. Try again.\n");
        }

    }else{
        printf("Invalid Password,Access denied.\n");
    }
}