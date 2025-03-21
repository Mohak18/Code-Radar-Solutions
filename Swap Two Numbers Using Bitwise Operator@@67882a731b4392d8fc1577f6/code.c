// Your code here...
#include <stdio.h>

int main() {
    int a, b;

    // Taking input
    
    scanf("%d %d", &a, &b);

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Output the swapped values
    printf("%d %d", a, b);

    return 0;
}
