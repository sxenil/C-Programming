#include <stdio.h>
#include <stdlib.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

void printLowBalanceCustomers(struct Customer *customers, int numCustomers) {
    printf("\nCustomers with balance below Rs. 100:\n");
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void performTransaction(struct Customer *customer, float amount, int code) {
    if (code == 1) {
        // Deposit
        customer->balance += amount;
        printf("Deposit successful. New balance: Rs. %.2f\n", customer->balance);
    } else {
        // Withdrawal
        if (customer->balance - amount < 100) {
            printf("The balance is insufficient for the specified withdrawal.\n");
        } else {
            customer->balance -= amount;
            printf("Withdrawal successful. New balance: Rs. %.2f\n", customer->balance);
        }
    }
}

int main() {
    int numCustomers;
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    // Dynamically allocate memory for an array of Customer structures
    struct Customer *customers = (struct Customer *)malloc(numCustomers * sizeof(struct Customer));

    // Input customer data
    for (int i = 0; i < numCustomers; ++i) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print customers with balance below Rs. 100
    printLowBalanceCustomers(customers, numCustomers);

    // Perform transactions (deposit or withdrawal)
    int acctNo, code;
    float amount;

    printf("\nEnter details for transaction:\n");
    printf("Account Number: ");
    scanf("%d", &acctNo);

    // Find the customer based on account number
    struct Customer *selectedCustomer = NULL;
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].accountNumber == acctNo) {
            selectedCustomer = &customers[i];
            break;
        }
    }

    if (selectedCustomer == NULL) {
        printf("Customer not found.\n");
    } else {
        printf("Amount: ");
        scanf("%f", &amount);
        printf("Code (1 for deposit, 0 for withdrawal): ");
        scanf("%d", &code);

        performTransaction(selectedCustomer, amount, code);
    }

    // Free dynamically allocated memory
    free(customers);

    return 0;
}
