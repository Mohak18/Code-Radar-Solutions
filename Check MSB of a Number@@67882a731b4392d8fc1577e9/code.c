// Your code here...
#include <stdio.h>

int main() {
    int num;


    scanf("%d", &num);

    // Check MSB using left shift
    if (num & (1 << 31))
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
