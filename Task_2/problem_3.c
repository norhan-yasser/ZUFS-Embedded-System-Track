#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num);

int main(){


     int lower, upper;


    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);


    for (int i = lower +1 ; i <upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

bool isPrime(int num) {

    int isPrime = true ;
     if( num == 0 || num ==1 ){

        isPrime=false;

     }else {

     for (int i = 2; i*i <= num ; ++i) {

    if (num % i == 0) {
      isPrime = false;
      break;
        }
       }
     }

     return isPrime;
}
