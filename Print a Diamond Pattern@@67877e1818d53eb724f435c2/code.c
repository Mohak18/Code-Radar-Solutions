#include<stdio.h>
int main(){
    int n;
    for(int i = 0;i<2*n-1;i++){
        for(int j = 0; j<n;j++){
            for(int l = 0;l<n-i;l++){
                printf(" ");
                for(int k = 0;k<l;k++){
                    printf("*");
            }
            }
            
        }
        
    }
    return 0;
}