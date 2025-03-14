// Your code here...

void printPrimesInRange(int a,int b)
{
    for (int i=a;i<=b;i++){
        int isprime = 1;
        for (int j=2;j<i;j++){
            if (i%j==0){
                isprime =0;
            }
        }
        if (isprime){
            printf("%d ",i);
        }

    }
}