// Your code here...
#include<stdio.h>
void rotate(int arr[],int n,int k){
       for(int i=0;i<n-1;i++){
        int temp=arr[i];
        if(k>n-1) break;
        arr[n-k]=arr[i];
        arr[i+k]=temp;
        k++;
       }
       
}
int main(){
    int n,arr[],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}