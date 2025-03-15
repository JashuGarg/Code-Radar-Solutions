// Your code here...// Your code here...
#include <stdio.h>
int main (){
    float sum = 0;
    for(int i=1;i<=7;i++){
        char day[100];
        float temp;
        scanf("%s %f",day,&temp);
        sum += temp;
    }
    float avg = sum/n;
    printf("Average Temperature: %.2f",avg);
}