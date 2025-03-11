// Your code here...
#include <stdio.h>

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
    int sumn=0;
    for (int i=1;i<=n;i++){
        sumn+= i;
    }
    printf("%d\n",sumn-sum);
    printf("%d\n",sumn);
    printf("%d\n",sum);


}