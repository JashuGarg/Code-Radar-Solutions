// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int len[1000];
    int height[100];

    for(int i=0;i<n;i++){
        scanf("%d %d",&len[i],&height[i]);
    }
    for (int i=0;i<n;i++){
        float area = len[i]*height[i];
        float Perimeter = 2*(len[i]+height[i]);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,area,Perimeter);
    }
}