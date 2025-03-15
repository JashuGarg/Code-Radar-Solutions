// Your code here...// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    float sum = 0;
    for(int i=1;i<=n;i++){
        char day[100];
        float temp;
        scanf("%s %f",day,&temp);
        sum += marks;
    }
    float avg = sum/n;
    printf("Average Marks: %.2f",avg);
}