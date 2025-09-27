/* if we list all the natural number below 10 that area multiples 3 or 5, we get 3, 5, 6 and 9.
the sum of the muliples is 23.
find the sum of all the multiples 3 or 5 below 1000. */
//##################################################

#include <stdio.h>

int main(){
    int sum = 0, n = 1000;
    for(int i = 1; i < n; i++){
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("The sum of these multiples is: %d\n", sum);
    return 0;
}
