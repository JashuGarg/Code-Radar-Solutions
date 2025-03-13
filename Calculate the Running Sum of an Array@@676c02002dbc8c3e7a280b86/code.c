#include <stdio.h>

int main (){
   int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[n];

    ans[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ans[i]= arr[i]+ans[i-1];
    }

    for (int i=0;i<n;i++){
        printf("%d ",&ans[i]);
    }
}