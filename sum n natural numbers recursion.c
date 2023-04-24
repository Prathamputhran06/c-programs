//sum n natural numbers using recursion
#include <stdio.h>

int sum_of_n_natural_numbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_of_n_natural_numbers(n-1);
    }
}

int main() {
    int n = 5;
    int sum = sum_of_n_natural_numbers(n);
    printf("The sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}

