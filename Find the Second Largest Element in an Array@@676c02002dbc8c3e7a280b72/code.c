// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = arr[0];
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
        if(arr[i]>max) max = arr[i];
    }
    max = 0;
    for(int i=0;i<n;i++){
        
        if(arr[i]>max) max = arr[i];
    }
    printf("%d", max);
    return 0;

    
}