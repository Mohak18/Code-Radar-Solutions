// Your code here...
#include<stdio.h>
int main()
{
    int N,i,j,nst;
    nst = 1;
    scanf("%d", &N);
    for(i=1;i<=N;i++){

        for(int k=1;k<=N-i;k++){
            printf(" ");
        }
    }
    for(i=1;i<=N;i++){
        for(j=1;j<=nst;j++){
            printf("*");
        }
        nst += 2;
        printf("\n");
    }
    return 0;
}
