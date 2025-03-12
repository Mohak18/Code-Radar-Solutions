// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("28");
    }
    else if(a==8){
        printf("31");
    }
    else if(a<=6 && a%2==0){
        printf("30");
    }
    else if(a>6 && a%2!=0){
        printf("30");
    }
    else if(a>12){
        printf("Invalid month");
    }
    else{
        printf("31");
    }
    return 0;
}