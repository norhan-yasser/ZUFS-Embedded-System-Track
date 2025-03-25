#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0, max_or = 0, max_xor = 0;

    // Iterate through all possible pairs (a, b)
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and= a & b;
            int or= a | b;
            int xor= a ^ b;

            // Check if values are less than k before updating max
            if (and< k && and > max_and) {
                max_and = and;
            }
            if (or < k && or > max_or) {
                max_or = or;
            }
            if (xor < k && xor > max_xor) {
                max_xor = xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}



int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
