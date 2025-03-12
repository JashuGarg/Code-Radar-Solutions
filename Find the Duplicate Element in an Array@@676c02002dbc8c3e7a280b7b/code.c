#include <stdio.h>

int main (){
    int arr[1000],n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans ;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                ans = arr[i];
                break;}
        }
    }
    printf("%d",ans);
    
}