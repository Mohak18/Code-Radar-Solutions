#include<stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    int prime = 0;
    // Loop to check divisibility from 2 up to num-1
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            prime += 1;
        }
    }

    if (prime == 1) {
        return 1;  // The number is prime
    } else {
        return 0;  // The number is not prime
    }
}