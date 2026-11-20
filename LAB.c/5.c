#include <stdio.h>

float balance = 0;

void createAccount() {
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    printf("Account Created Successfully!\n");
    printf("Current Balance: %.2f\n", balance);
}

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance += amount;

    printf("Deposit Successful!\n");
    printf("Current Balance: %.2f\n", balance);
}

void withdraw() {
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= balance) {
        balance -= amount;
        printf("Withdrawal Successful!\n");
    }
    else {
        printf("Insufficient Balance!\n");
    }

    printf("Current Balance: %.2f\n", balance);
}

void checkBalance() {
    printf("Current Balance: %.2f\n", balance);
}

int main() {
    int choice;

    do {
        printf("\n----- BANKING SYSTEM -----\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}