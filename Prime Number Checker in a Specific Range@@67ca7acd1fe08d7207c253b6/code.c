// Your code here
void printPrimesInRange(int a,int b){
    int count =0;
    for(int i=a;i<=b;i++){
        for(int j = 2;j<=i;j++){
            if(i%j==0){
                count+=1;
            }
        }
        
        if(count==1){
        printf("%d ",i);
        else{printf("No prime numbers");}
    }
    count = 0;
        
    
    }

    
}