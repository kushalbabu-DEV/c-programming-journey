
#include <stdio.h>

void CheckBalance(float balance);
float Deposite();
float Withdraw(float balance);

int main() {

    // Banking Program

    int choice = 0;
    float balance = 0.0f;

    printf("*****Welcome to the Bank*****\n");

    do {
        printf("\nSelect an option:\n");
        printf("1. Check your Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                CheckBalance(balance);
                break;

            case 2:
                balance += Deposite();
                break;

            case 3:
                balance -= Withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using the bank!\n");
                break;

            default:
                printf("\nInvalid Choice! Please select from 1 - 4!\n");
        }

    } while(choice != 4);

    return 0;
}

void CheckBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);
}

float Deposite() {

    float amount = 0.0f;

    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if(amount <= 0) {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else {
        printf("Successfully deposited: $%.2f\n", amount);
        return amount;
    }
}

float Withdraw(float balance) {

    float amount = 0.0f;

    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    if(amount <= 0) {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance) {
        printf("Insufficient funds! Your balance: $%.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("Successfully withdrew: $%.2f\n", amount);
        return amount;
    }
}
