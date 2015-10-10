/*
 * Problem 4
 *
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>


int is_palindromic(int original) {
    int reversed = 0;
    int n = original;

    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int largest = 0;
    
    for(int i = 100; i < 999; i++) {
        for(int j = 100; j < 999; j++) {
            if(is_palindromic(i * j))
                if(i * j > largest)
                    largest = i * j;
        }
    }

    printf("%d\n", largest);
}
