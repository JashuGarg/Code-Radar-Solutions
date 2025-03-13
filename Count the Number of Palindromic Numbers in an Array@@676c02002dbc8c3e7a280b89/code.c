#include <stdio.h>

int main (){
    int n,arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for (int i=0;i<n;i++)
    {
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