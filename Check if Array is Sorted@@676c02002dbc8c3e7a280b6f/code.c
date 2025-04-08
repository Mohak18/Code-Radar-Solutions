// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]) int count=0;
        else count++;
    }
    if(count == 0) printf("Sorted");
    else printf("Not Sorted");
    return 0;

}