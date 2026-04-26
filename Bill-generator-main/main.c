#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char email[50];
    char address[100];
    char phone[15];
    char item[50];
    float totalBill = 0;
    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    printf("Enter your email address: ");
    scanf(" %[^\n]", email);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("Enter your phone number: ");
    scanf(" %[^\n]", phone);

    printf("\nAvailable items:\n");
    printf("1. Iphone 17 pro\n");
    printf("2. Iphone 17 pro max\n");
    printf("3. Airpods pro 3\n");
    printf("4. Macbook Air\n\n");

    printf("Enter the item bought (exact name as above): ");
    scanf(" %[^\n]", item);

    if (strcmp(item, "Iphone 17 pro") == 0) {
        totalBill = 134900;
    }
    else if (strcmp(item, "Iphone 17 pro max") == 0) {
        totalBill = 149900;
    }
    else if (strcmp(item, "Airpods pro 3") == 0) {
        totalBill = 25900;
    }
    else if (strcmp(item, "Macbook Air") == 0) {
        totalBill = 99900;
    }
    else {
        printf("\nInvalid item entered! Please restart the program.\n");
        return 0;
    }

    printf("\n\n========== APPLE STORE BILL ==========\n");
    printf("Customer Name   : %s\n", name);
    printf("Email Address   : %s\n", email);
    printf("Address         : %s\n", address);
    printf("Phone Number    : %s\n", phone);
    printf("Item Purchased  : %s\n", item);
    printf("--------------------------------------\n");
    printf("Total Payable   : Rs. %.2f\n", totalBill);
    printf("======================================\n");
    printf("Thank you for shopping with Apple Store!\n");

    return 0;
}
