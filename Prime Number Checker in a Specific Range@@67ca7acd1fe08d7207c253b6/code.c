// Your code here
void printPrimesInRange(int a,int b){
    int count =0;
    if(a==b){
        printf("No primr numbers")
    }
    for(int i=a;i<=b;i++){
        if(i<1){
            return;
        }
        for(int j = 2;j<=i;j++){
            if(i%j==0){
                count+=1;
            }
        }
        if(count==1){
        printf("%d ",i);
    }
    count = 0;
        
    
    }

    
}