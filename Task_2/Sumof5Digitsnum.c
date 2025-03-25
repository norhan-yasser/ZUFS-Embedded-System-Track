#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int remainder,sum;

    for (int i =0 ; n!=0 ; i++ ) {
       remainder=n%10;
       sum+=remainder;
       n/=10;
    }

    printf("%d",sum);
    return 0;
}
