#include <stdio.h>
#include <limits.h>
int main(){
    int n,arr[1000];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min = INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]<min)
            min = arr[i];
    }
    int second = -1;
    for(int i=0;i<n;i++){
        if (arr[i]==min)
            continue;
        else {
            second = min(arr[i],second);
        }
    }
    printf("%d",second);
}