// Your code here...

int isPrime(int num){
    int isprime=1;
    for (int i=2;i<num;i++){
        if(num%i==0)
            isprime=0;
    }
    return isprime ;
}