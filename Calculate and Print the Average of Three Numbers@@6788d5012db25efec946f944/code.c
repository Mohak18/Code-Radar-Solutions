// Your code here...
#include <stdio.h>
int main()
{   
    int a,b,c;
    float avearage;
    scanf("%d %d %d", &a, &b,&c);
    avearage = (a + b + c)/3.0;
    printf("Average: %.2f", avearage);
    return 0;
}