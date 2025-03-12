// Your code here...
#include <stdio.h>

int main (){
    int arr[1000],n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans,isrepeat=1;
    for(int i=0;i<n;i++){
        if(isrepeat)
            {
                for(int j=0;i<n;j++){
                if (arr[i]==arr[j]){
                    ans = arr[i];
                    isrepeat = 0;
                    break;    
                }
                }
            }
    }
    printf("%d",ans);
}