#include <stdio.h>

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        int ans = arr[i];
        for (int j=0;j<n;j++)
        {
            if(arr[j]<=ans)
                ans = arr[i];
            else
                break;
        }
    printf("%d ",ans);
    }

}