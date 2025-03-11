// Your code here...
#include <stdio.h>

int checkpalindrome(int arr[],int n)
{
    int i =0,j=n-1;
    while (i<=j){
        if (arr[i]!=arr[j])
            return 0;
    }
    return 1;
}

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pali = checkpalindrome(arr,n);
    if (pali)
        printf("YES");
    else
        printf("NO");
}
