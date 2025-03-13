#include <stdio.h>

int main (){
    int n,arr[1000];
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int i =n/2;
    printf("%d\n",i);
    if(n%2==0)
    {
        sum = arr[i-1]+arr[i];
    }
    else {
        sum = arr[i];
    }
    printf("%d",sum);
}