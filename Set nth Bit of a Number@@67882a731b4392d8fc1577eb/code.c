// Your code here...
#include <stdio.h>

int main() {
    int num, n;

    // Taking input
   
    scanf("%d", &num);
    
 
    scanf("%d", &n);

    // Setting the nth bit using bitwise OR (|)
    num = num | (1 << n);

    // Output the updated number
    printf("%d", num);

    return 0;
}
