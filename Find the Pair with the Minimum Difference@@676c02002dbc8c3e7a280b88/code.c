#include <stdio.h>
#include <limits.h>
int main (){
    int n,arr[100];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max =  INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>max)
            max==arr[i];
    }
    int second = INT_MIN;

    for (int i=0;i<n;i++){
        if (arr[i]==max)
            continue;
        if (arr[i]>second){
            second = arr[i];
        }
    }

    printf("%d %d",second,max);
}