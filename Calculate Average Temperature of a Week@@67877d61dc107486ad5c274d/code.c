// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int temp[1000];
    char day[n][100];
    float sum = 0;
    for(int i=0;i<n;i++){
        scanf("%s %d",day[i],&temp[i]);
        sum += temp[i];
    }
    printf("Average Temperature: %.2f",sum/7);
    
}