// Your code here...
#include <stdio.h>

int main (){
    int arr[1000],n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=-1,isrepeat=1;
    for(int i=0;i<n;i++){
        if(isrepeat)
            {
                for(int j=i+1;j<n;j++){
                if (arr[i]==arr[j]){
                    ans = arr[i];
                    isrepeat = 0;  
                }
                }
            }
    }
    printf("%d",ans);
}