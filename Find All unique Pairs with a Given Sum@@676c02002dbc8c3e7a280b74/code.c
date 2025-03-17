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
        for (int j=0;j<n-j+1;j++){
            sum  = arr[i]+arr[j];
            if (sum==target){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}