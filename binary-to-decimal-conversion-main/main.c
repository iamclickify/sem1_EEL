#include <stdio.h>

int binaryToDecimal(int binary, int power) {
    if (binary == 0)
        return 0;

    int lastDigit = binary % 10;
    return lastDigit * (1 << power) + binaryToDecimal(binary / 10, power + 1);
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binaryToDecimal(binary, 0);

    printf("Decimal value: %d\n", decimal);

    return 0;
}
