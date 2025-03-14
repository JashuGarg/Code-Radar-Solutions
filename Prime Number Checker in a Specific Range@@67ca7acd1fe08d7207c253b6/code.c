// Your code here...

void printPrimesInRange(int a,int b)
{
    int count =0;
    for (int i=a;i<=b;i++){
        if (i<2){
            continue;
        }
        int isprime = 1;
        for (int j=2;j<i;j++){
            if (i%j==0){
                isprime =0;
            }
        }
        if (isprime){
            printf("%d ",i);
            count++;
        }

    }
    if (count==0){
        printf("No prime numbers");
    }
    
}