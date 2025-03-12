// Your code here...
#include <stdio.h>

int main (){
    int arr[1000],n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans;
    int newcount=0;
    for (int i=0;i<n,i++){
        int count =0;

        for (int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if (count>newcount){
            ans = arr[i];
            newcount = count;
        }
        
    }
    printf("%d",ans);
}