// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a =1;
    for(int i=1; i <=n;i++){
        for(int j =1; j<=n-i;j++){
                printf(" ");
        }
        for(int k = 1; k<n+i;k++){
            if(k%2==0){
                printf(" ");
            }
            else{
                printf("%d", a);
                a+=1;
            }
            
        }
        a = 1;
        printf("\n");
    }
    return 0;
}