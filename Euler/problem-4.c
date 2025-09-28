/*  A palindromic number reads the same both ways. 
    The largest palindrome made from the product of two 2-digit numbers is 91 * 99 = 9009
    Find the largest palindrome made from the product of two 3-digit numbers.
*/
//##################################

#include <stdio.h>

int palindrome(int);

int main(){
    int max = 0;
 
    for(int i = 100; i < 1000; i++)
        for(int j = i; j < 1000; j++)
            if (palindrome(i * j))
                if (max < i * j)
                    max = i * j;
           
    printf("Largest palindrome number: %d\n", max);    
    return 0;
}

int palindrome(int n){
    int original = n;
    int reversed = 0;

    while(n > 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}
