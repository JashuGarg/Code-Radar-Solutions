// Your code here...
#include <stdio.h>
int countinteger(int arr[],int n,int num){

}
int main (){
    int n,arr[10000];

    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int majority = n/2,ans;
    for (int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j])
                count++;
        }
        if (count>majority)
            ans = arr[i];
    }

if (ans!=0)
    printf("%d",ans);
else
    printf("%d",-1);
}