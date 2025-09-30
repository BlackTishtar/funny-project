/*
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
    What is the 10001st prime number?
*/
//##################################

#include <stdio.h>

int is_prime(int);

int main() {
    int count = 0;
    int n = 1;

    while (count < 10001) {
        n++;
        if (is_prime(n))
            count++;
    }

    printf("%d\t%d\n", n, count);
    return 0;    
}

int is_prime(int n) {
    if ( n <= 1) return 0;
    
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0)
            return 0;

    return 1;
}
