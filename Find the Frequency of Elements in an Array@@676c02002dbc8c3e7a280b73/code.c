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
        for(int j=i;j<n-1;j++){
            if(arr[i]==arr[j+1]) count++;
        }
        count=0;
        printf("%d %d\n", arr[i],count);
    }
    return 0;

}