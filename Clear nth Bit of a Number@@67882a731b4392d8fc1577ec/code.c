// Your code here...
#include <stdio.h>

int main() {
    int num, n, updatedNum;

    // Taking user input
   
    scanf("%d", &num);
   
    scanf("%d", &n);

    // Clearing the nth bit
    updatedNum = num & ~(1 << n);

    // Output the updated number
    printf("%d", updatedNum);

    return 0;
}
