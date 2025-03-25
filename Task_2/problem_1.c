#include <stdio.h>


unsigned char set_bit(unsigned char num, int bit) {
    return num | (1 << bit);
}


unsigned char clear_bit(unsigned char num, int bit) {
    return num & ~(1 << bit);
}

unsigned char toggle_bit(unsigned char num, int bit) {
    return num ^ (1 << bit);
}

int read_bit(unsigned char num, int bit) {
    return (num >> bit) & 1;
}

int main() {
    unsigned char num;
    int bit, function;

    // Taking input from user
    printf("Enter number, bit position, and function ID (1-4): ");
    scanf("%hhu %d %d", &num, &bit, &function);


    if (function == 1) {
        printf("%d\n", set_bit(num, bit));
    } else if (function == 2) {
        printf("%d\n", clear_bit(num, bit));
    } else if (function == 3) {
        printf("%d\n", toggle_bit(num, bit));
    } else if (function == 4) {
        printf("%d\n", read_bit(num, bit));
    } else {
        printf("Invalid function ID!\n");
    }

    return 0;
}

