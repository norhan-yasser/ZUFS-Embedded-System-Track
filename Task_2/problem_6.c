#include <stdio.h>

// Function to calculate power using recursion
long long power(int base, int exp) {
    if (exp == 0)  // Base case: Any number to the power of 0 is 1
        return 1;
    return base * power(base, exp - 1);  // Recursive step
}

int main() {
    int base, exp;

    // Get input from user
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number (positive integer): ");
    scanf("%d", &exp);

    // Handle negative exponents
    if (exp < 0) {
        printf("This program only supports positive exponents.\n");
    } else {
        printf("%d^%d = %lld\n", base, exp, power(base, exp));
    }

    return 0;
}
