#include <stdio.h>

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int target ;
    scanf("%d",&target);

    for (int i=0;i<n;i++){
        int sum =0;
        for (int j=i+1;j<n;j++){
            sum  = arr[i]+arr[j];
            if (sum==target){
                printf("%d %d\n",arr[i],arr[j]);
                if (arr[i]==arr[j])
                    break;
            }
        }
    }
}