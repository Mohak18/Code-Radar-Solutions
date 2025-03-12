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

int main() {
    int t;
    scanf("%d", &t);  // Input number of test cases

    int nums[t];  // Array to store input numbers
    // Input all numbers for the test cases
    for (int i = 0; i < t; i++) {
        scanf("%d", &nums[i]);
    }

    // Output the results for each test case
    for (int i = 0; i < t; i++) {
        printf("%d\n", isPrime(nums[i]));  // Print result for each number
    }

    return 0;
}
