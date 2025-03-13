#include <stdio.h>

int main (){
    int n,arr[1000];
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int i =n;
    if(n%2==0)
    {
        sum = arr[((i/2)+1)];
    }
    else {
        sum = arr[i/2]+arr[(i/2)+1];
    }
    printf("%d",sum);
}