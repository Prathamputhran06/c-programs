//prime numbers between  10 to 100
#include <stdio.h>
int main() {
    int i, j, isPrime;

    /
    for (i = 10; i <= 100; i++) {
        isPrime = 1; 
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

