// Your code here..
#include <stdio.h>

int main (){
    int n ,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int start = 0,end = 1;
    int ans[100];
    while (end<n)
    {
        if (arr[end]-arr[start]==target){
            ans[0]=arr[start];
            ans[1]=arr[end];
        }
        else if (arr[end]-arr[start]>target){
            end++;
        }else 
            start++;
    }
    if (ans[0])
    {
        printf("%d %d",ans[0],ans[1]);
    }
    else 
        printf("%d",-1);
}
