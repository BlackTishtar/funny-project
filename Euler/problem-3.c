/* The prime factors of 13195 are 5, 7, 13 and 29.
    what is the largest prime factor of the number 600851475143?
*/
//#######################################

#include <stdio.h>

void prime_factor(long int);

int main(){
    long int n = 600851475143;

    prime_factor(n);
    return 0;
}

void prime_factor(long int n){
    long int i = 2;
    long int max = 0;
    
    while(n > 1) {
        if (n % i == 0) {
            max = i;
            while(n % i == 0)
                n /= i;
        }
        i++;
    }
    printf("max: %ld\n", max);
}
