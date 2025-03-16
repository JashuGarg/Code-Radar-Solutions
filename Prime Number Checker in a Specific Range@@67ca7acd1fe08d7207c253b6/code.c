void printPrimesInRange(int a,int b){
    int count_prime=0;
        for(int i=a;i<=b;i++){
            if(a==b){
                int c=0;
                for(int k=1;k<=a;k++){
                    if(a%k==0){
                        count_prime+=1;
                    }
                    else{
                        continue;
                    }
                }
                if(c==2){
                    printf("%d ",a);
                }
                else{
                printf("No prime numbers");}
            }
            else{
            int count=0;
            for(int j=2;j<=i;j++){
                
                if(i%j==0){
                    count+=1;
                }
                else{
                    continue;
                }
            }
            if(count==1){
                count_prime+=1;
                printf("%d ",i);
            }
            else{
                continue;
            }
            if(count_prime==0){
                printf("No prime numbers");
            }
            }
        }
    }