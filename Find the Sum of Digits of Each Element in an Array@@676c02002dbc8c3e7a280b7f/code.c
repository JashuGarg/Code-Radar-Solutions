#include <stdio.h>

int main (){
    int arr[1000],n;
    scanf("%d",&n);
    int ansarr[1000];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        int rem,ans=0;
        while (arr[i]>0)
        {
            rem = arr[i]%10;
            if (rem<=0){
                rem = rem*(-1);
            }
            ans += rem;
            arr[i]= arr[i]/10;
        }
        ansarr[i]=ans;
    }

    for (int i=0;i<n;i++){
        printf("%d ",ansarr[i]);
    }

}