// Your code here...
#include<stdio.h>
int main()
{
    int a,b,N;
    scanf("%d", &N);
    for(a = 1,a <= N,a++){
        for(b = a,b>0,b--){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}