#include <stdio.h>

int main(){

    int choice;
    float balance = 0.00, tempfunds;
    do{
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");scanf("%d", &choice);

        if (choice ==  1){
            printf("Current Balance: %.2f\n", balance);
        }
        else if (choice == 2){
            printf("Enter amount to deposit: ");scanf("%f", &tempfunds);
            balance = balance + tempfunds;
            printf("Deposit Successful.\n");
        }
        else if (choice == 3){
            printf("Enter amount to withdraw: ");scanf("%f", &tempfunds);
            if (balance >= tempfunds){
                balance = balance - tempfunds;
                printf("Withdrawal successful.\n");
            }
            else{
                printf("Insufficient funds\n");
            }
        }
    }
    while (choice != 4);
    printf("Thank you for using the ATM.");

    return 0;
}