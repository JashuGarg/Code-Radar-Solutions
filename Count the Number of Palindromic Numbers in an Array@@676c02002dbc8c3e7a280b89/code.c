#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]<0){
            continue;
        }
        int rem,ans=0;
        int num = arr[i];
        while (num){
            rem = num%10;
            ans = ans*10 +rem;
            num = num/10;
        }
        if (ans==arr[i]){
            count++;
        }
        
    }
    printf("%d",count);
}