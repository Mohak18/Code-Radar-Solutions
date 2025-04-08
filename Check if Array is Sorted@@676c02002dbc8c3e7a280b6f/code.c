// Your code here...
#include <stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]);
        else count++;
    }
    if(count == 0) printf("Sorted");
    else printf("Not Sorted");
    return 0;

}