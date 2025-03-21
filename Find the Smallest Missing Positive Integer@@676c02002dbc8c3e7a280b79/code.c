// Your code here...
#include <stdio.h>
#include <limits.h>

int main (){
    int n,arr[10000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if (arr[i]<0)
            arr[i]=0;
        sum+=arr[i];
    }

    int sumn = (n*(n+1))/2 ;
    printf("%d",sumn-sum);


}