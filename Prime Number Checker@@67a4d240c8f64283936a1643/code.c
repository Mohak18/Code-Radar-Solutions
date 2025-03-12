#include <stdio.h>
#include <math.h>  // For sqrt function

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 0 and 1 are not prime
    }
    
    int prime = 0;  // Counter for number of divisors

    // Check divisibility up to sqrt(num) for efficiency
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            prime++;  // Increment divisor count
            break;    // No need to check further if a divisor is found
        }
    }

    // If prime is still 0, then it's prime
    return prime == 0 ? 1 : 0;  // Return 1 if prime, else 0
}

int main() {
    int t;
    scanf("%d", &t);  // Input number of test cases

    while (t--) {
        int num;
        scanf("%d", &num);  // Input the number to check
        printf("%d\n", isPrime(num));  // Output 1 if prime, 0 if not
    }

    return 0;
}
