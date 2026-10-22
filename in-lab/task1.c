#include <stdio.h>

void welcome(){
    printf("Welcome to the ATM\n");
}

void display_amount(int amount){
    printf("\nThe withdrawal amount is: Rs. %d.\n", amount);
}

int getWithdrawalLimit(){
    return 50000;
}

int calculateBalance(int balance, int withdrawal_amount){
    return balance - withdrawal_amount;
}

int checkWithdrawal(int balance, int withdrawal_amount, int max_limit){
    return (withdrawal_amount > 0 && withdrawal_amount <= balance && withdrawal_amount <= max_limit);
}

void main(){
    int amount = 10000, balance = 100000;

    welcome();
    display_amount(amount);
    int limit = getWithdrawalLimit();
    if (checkWithdrawal(balance, amount, limit)) {
        int remaining_balance = calculateBalance(balance, amount);
        printf("\nThe remaining balance is Rs. %d.", remaining_balance);
    }
    else printf("\nWithdrawal invalid.");

}
