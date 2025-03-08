// Your code here...
#include<stdio.h>
int main(){
    int n;
    int a = 1;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int k = n;k>=i;k--){
            printf("%d ", a);
            a+=1;
        }
        a = 1;
        printf("\n");
    }
    return 0;
}