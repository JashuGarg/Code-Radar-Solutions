// Your code here...
#include <stdio.h>
int countprime(int arr[],int n){
    int count =0;
    for (int i=0;i<n;i++){
       int isprime=1;
       if (arr[i]<2){
            continue;
       }
        for (int j=2;j<arr[i];j++){
            if (arr[i]%j==0)
                isprime=0;
        }
    if (isprime){
        count++;
        }
    }
    return count;
}
int main (){
    int n,arr[1000];
    scanf("%d",&n);
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",countprime(arr,n));
}