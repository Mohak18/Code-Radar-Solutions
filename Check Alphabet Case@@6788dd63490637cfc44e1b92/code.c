// Your code here...
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a.upper){
        printf("Uppercase");
    }
    else if(a.lower){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}