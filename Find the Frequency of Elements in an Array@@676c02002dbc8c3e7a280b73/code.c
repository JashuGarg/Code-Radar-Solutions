// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[1000];
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j])
                count++;
        }
        for(int j=n-1;j>=0;j--){
            if (arr[i]==arr[j]){
                continue;
            }
        printf("%d %d\n",arr[i],count);
        }
    }
}