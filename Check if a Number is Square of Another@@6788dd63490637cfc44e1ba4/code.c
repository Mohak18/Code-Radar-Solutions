// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int c = b*b;
    if(a==c){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}