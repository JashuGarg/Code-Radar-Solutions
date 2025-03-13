// Your code here...
#include <stdio.h>
int main (){
    int n,arr[1000],target;
    scanf("%d",&n);
    scanf("%d",&target);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for (int i=0;i<n;i++){
        if (arr[i]>target)
            count++;
    }
    printf("%d",count);
    
}