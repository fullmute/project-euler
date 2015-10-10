/*
 * Problem 5
 *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdio.h>


int main() {
    int num = 20;
    long lcm = 1;
    
    for(int i = 1; i <= num; i++) {
        int hcf = 1;
        for(int j = 1; j <= i; j++) {
            if(!(i % j) && !(lcm % j)) {
                hcf = j;
            }
        }
        lcm = (lcm * i) / hcf;
    }

    printf("%d\n", lcm);
}
