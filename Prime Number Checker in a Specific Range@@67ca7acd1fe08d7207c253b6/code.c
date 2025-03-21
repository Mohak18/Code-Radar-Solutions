// Your code here
int printPrimesInRange(int a,int b){
    int count =0;
    for(int i=a;i<=b;a++){
        if(i<=1){
            return 0;
        }
        for(int j = 2;j<i;j++){
            if(i%2==0){
                count+=1;
            }
        }
        if(count==0){
        return i;;
    }
    }
    
}