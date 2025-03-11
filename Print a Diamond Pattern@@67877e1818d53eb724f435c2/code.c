// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst =1;
    for(int i = 1; i <= n+n/2+1;i++){
        for(int k = 1; k<=n-i;k++){
            printf(" ");
        }
        for(int j = 1; j <= nst;j++){
            printf("*");
            nst+=2;
        }
        nst = 1;
        for(int l = n;l<=n+i;l++){
            printf(" ");
        }
        for(int m = n; m>i;m--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}