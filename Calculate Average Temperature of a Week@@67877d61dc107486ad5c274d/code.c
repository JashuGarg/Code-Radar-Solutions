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
    }
    for (int i=0;i<n;i++){
        sum+= temp[i];
    }
    float avg = sum/7;
    printf("Average Temperature: %.2f",avg);
    
}