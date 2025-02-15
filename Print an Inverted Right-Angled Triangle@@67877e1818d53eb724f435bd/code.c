// Your code here...
#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d", &n);
    for(a = 1,a <= n,a++){
        for(b = a,b>0,b--){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}