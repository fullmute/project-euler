/*
 * Problem 3
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
 */

#include <stdio.h>


int is_prime(long long n) {
    if(!(n % 2))
        return 0;
    for(long long i = 3; i <= (n / 2) + 1; i += 2) {
        if(n % i == 0 && i != n)
            return 0;
    }
    return 1;
}

int main() {
    long long n = 600851475143;
    
    long long largest = 0;
    for(long long i = 3; i <= n; i += 2) {
        if(!(n % i)) {
            if(is_prime(i)) {
                largest = i;
                printf("%d\n", largest);
            }
        }
    }
}
