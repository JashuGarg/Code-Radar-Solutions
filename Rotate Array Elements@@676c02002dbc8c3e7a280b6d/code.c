// Your code here...
#include <stdio.h>
int main (){
    int n,arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rotate;
    scanf("%d",&rotate);
    int x = 1;
    while (x<=rotate)
  {  for (int i=0;i<n-1;i++)
    {
        int newarr[1000]=[0];
        int temp = arr[n-1];
        newarr[i+1] =arr[i];
        newarr[0]=temp;
    }
    for(int i=0;i<n;i++){
        arr[i]=newarr[i]
    }
    x++;
    }
}