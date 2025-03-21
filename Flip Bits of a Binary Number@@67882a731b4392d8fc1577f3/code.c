#include <stdio.h>

int main() {
    int num, flippedNum;

    // Taking user input
   
    scanf("%d", &num);

    // Flipping all bits using bitwise NOT (~)
    flippedNum = ~num;

    // Output the result
    printf("%d", flippedNum);

    return 0;
}
