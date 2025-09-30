/* 
The sum of the squares of the first ten natural numbers is 385.
The square of the sum of the first ten natural numbers is 3025.

Hencethe difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
//################################

#include <stdio.h>

int square_number(int);

int main(){
    int sum1 = 0;
    int sum2 = 0;
    int result = 0;

    for (int i = 1; i <= 100; i++) {
        sum1 += square_number(i);
        sum2 += i;
    }

    if (sum1 > square_number(sum2))
        result = sum1 - square_number(sum2);
    else
        result = square_number(sum2) - sum1;

    printf("%d\n", result);
    return 0;
}

int square_number(int x){
    return x * x;
}
