// Your code here...
int isPrime(num){
    int n;
    int prime;
    for(int i = 2; i <= n;i++){
        if(n%i == 0){
            prime += 1;
        }

    }
    if(prime == 2){
        return '1';
    }
    else{
        return '0';
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}