// Your code here...
#include<stdio.h>
int main(){
    int n,arr[n],min,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) min=arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) max = arr[i];
    }
    printf("%d %d", min, max);
    return 0;
}