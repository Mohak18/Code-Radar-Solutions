// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int max2=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){  
        if((arr[i]>min)&&(arr[i]<max)) max2 = arr[i];
    }
    printf("%d", max2);
    return 0;

    
}