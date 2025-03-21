// Your code here...
#include <stdio.h>

int main() {
    int num, n;

    // Taking user input
 
    scanf("%d", &num);

    scanf("%d", &n);

    // Checking the nth bit using bitwise AND and left shift
    if (num & (1 << n))
        printf("1");
    else
        printf("0");

    return 0;
}
