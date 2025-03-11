// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int summ = 0;
    for(int i=1;i<=n;i++){
        summ += i;
    }
    printf("%d", summ);
    return 0;
}