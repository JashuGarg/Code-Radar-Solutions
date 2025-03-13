#include <stdio.h>

int main (){
    int arr[1000],n,ans[100];
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ans[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ans[i]= arr[i]+ans[i-1];
    }

    for (int i=0;i<n;i++){
        printf("%d",&ans[i]);
    }
}