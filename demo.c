#include <stdio.h>
#include <string.h>

int main() {
    // Set login credent
    char username[] = "myusername";
    char password[] = "mypassword";
    
    // Prompt user to enter login credentials
    char enteredUsername[20];
    char enteredPassword[20];
    printf("Enter your username: ");
    scanf("%s", enteredUsername);
    printf("Enter your password: ");
    scanf("%s", enteredPassword);
    
    // Check if login credentials are correct
    if (strcmp(enteredUsername, username) == 0 && strcmp(enteredPassword, password) == 0) {
        printf("Login successful!\n");
        
        // Display menu options
        int choice;
        float balance = 5000.00;
        printf("Menu:\n");
        printf("1. Display balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Transfer money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Handle user's choice
        switch (choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                float amount;
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Amount withdrawn: %.2f\n", amount);
                    printf("New balance is: %.2f\n", balance);
                }
                break;
            case 3:
                float depositAmount;
                printf("Enter amount to deposit: ");
                scanf("%f", &depositAmount);
                balance += depositAmount;
                printf("Amount deposited: %.2f\n", depositAmount);
                printf("New balance is: %.2f\n", balance);
                break;
            case 4:
                // Code to handle money transfer
                printf("Money transfer not implemented yet!\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } else {
        printf("Invalid username or password. Please try again.\n");
    }
    
    return 0;
}
