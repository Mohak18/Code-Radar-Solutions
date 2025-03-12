#include <stdio.h>

int main() {
    int a, b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);  // Input two integers and an operator

    int d = a + b;
    int e = a - b;
    int f = a * b;
    int g = 0;  // Default for division result

    if (ch == '+') {
        printf("%d", d);
    } else if (ch == '-') {
        printf("%d", e);
    } else if (ch == '*') {
        printf("%d", f);
    } else if (ch == '/') {
        if (b == 0) {
            printf("error");  // Error handling for division by zero
        } else {
            g = a / b;
            printf("%d", g);
        }
    } else {
        printf("Invalid operator\n");  // Handle invalid operator
    }

    return 0;
}
