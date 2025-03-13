#include <stdio.h>

int main (){
   int arr[1000],n;

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[1000];

    ans[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ans[i]= arr[i]+ans[i-1];
    }

    for (int i=0;i<n;i++){
        printf("%d ",&ans[i]);
    }
}