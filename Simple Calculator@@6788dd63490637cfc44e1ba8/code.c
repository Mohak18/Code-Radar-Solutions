// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c", &a,&b,&ch);
    int d= a+b;
    int e=a-b;
    int f=a*b;
    int g=a/b;
    if(ch == '+'){
        printf("%d",d);
    }
    else if(ch == '-'){
        printf("%d", e);
    }
    else if(ch == '*'){
        printf("%d", f);
    }
    else{
        if(b==0){
            printf("error");
        }
        else{
            printf("%d", g);
        }
        
    }
    return 0;
}