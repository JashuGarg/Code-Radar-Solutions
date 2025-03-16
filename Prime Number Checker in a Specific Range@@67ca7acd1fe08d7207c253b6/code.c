void printPrimesInRange(int a,int b){
    int count_prime=0;
        for(int i=a;i<=b;i++){
            int count=0;
            for(int j=2;j<i;j++){
                if(i%j==0)
                    count+=1;
 
            }
            if(count==1){
                count_prime+=1;
                printf("%d ",i);
            }
        }
            if(count_prime==0)
                printf("No prime numbers");
    }