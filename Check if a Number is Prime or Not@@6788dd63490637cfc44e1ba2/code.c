// Your code here...
#include<stdio.h>
int main(){
    int a;
    int prime =0;
    scanf("%d",&a);
    for(int i = 2; i < a; i++){
        if(a%i==0){
            prime++;
        }
    }
    if(prime==0){
        printf("Prime");
    }
    else{
        printf("NOt Prime");
    }
    return 0;
}