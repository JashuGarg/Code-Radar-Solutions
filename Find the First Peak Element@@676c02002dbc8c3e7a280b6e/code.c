// Your code here...
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int ans = -1;
    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            ans = arr[i];
            break;
            }
    }
    if (ans == -1){
        if (arr[0]>arr[1])
            ans = arr[0];
        else if (arr[n-1]>arr[n-2])
            ans = arr[n-1];
    }

    printf("%d",ans);
}