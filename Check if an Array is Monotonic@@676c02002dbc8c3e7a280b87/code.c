// Your code here...
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);

    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int isincr = 0,isdec =0;
    for (int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i])
            isincr = 1;
        else 
            isincr=0;
    }
    for (int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i])
            isdec = 1;
        else 
            isdec=0;
    }

    if (isdec==1 || isincr ==1)
        printf("YES");
    else 
        printf("NO");
}