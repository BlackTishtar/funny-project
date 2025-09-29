/* 2520 is the smallest number that can be divided by each of the number from 1 to 10 without any remainder.
    what is the smallest positive number that is evenly divisble by all of the numbers from 1 to 20?
*/
//############################

#include <stdio.h>

int main(){
    const int MAX_SIZE = 20;
    int num = 2;
        
    printf("Please wait...\n");

    while (1) {
        int count = 0;
        for (int i = 1; num % i == 0 && num % 2 == 0 && i <= MAX_SIZE; i++)
            count++;
        if (count == MAX_SIZE)
            break;
        num++;
    }

    printf("Smallest number divisible by all numbers from 1 to %d is: %d\n", MAX_SIZE, num);
    return 0;
}
