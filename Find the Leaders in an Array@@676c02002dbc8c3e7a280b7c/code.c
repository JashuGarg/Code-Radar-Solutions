#include <stdio.h>

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
    int bigger =0;
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
                bigger = 0;
                break;
            else 
                bigger = 1;
                
        }
        if (bigger)
            printf("%d ",arr[i]);
    }

}