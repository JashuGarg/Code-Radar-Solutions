// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[1000];
    int visit[1000];
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        if (visit[i]) 
            continue;

        int count=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++; 
                visit[j] = 1;
                }
        }
        
        
        printf("%d %d\n",arr[i],count);
    }
}