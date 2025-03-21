#include <stdio.h>

int main() {
    int num;
    
    // Taking user input

    scanf("%d", &num);
    
    // Checking LSB using bitwise AND
    if (num & 1)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
