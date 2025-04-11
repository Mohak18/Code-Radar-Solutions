// Your code here...  
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]) count++;
        }
        printf("%d %d\n", arr[i],count);
        count=0;
    }
    return 0;

}