// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for(int i = 1; i<=n;i++){
        for(int j = n;j>=i;j--){
            printf("%c ", ch);
            ch += 1;
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}