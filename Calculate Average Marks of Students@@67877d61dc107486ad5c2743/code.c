// Your code here...// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    float sum = 0;
    for(int i=1;i<=n;i++){
        int rollno;
        char name[100];
        float marks;
        scanf("%d %s %f",&rollno,name,&marks);
        sum += marks;
    }
    float avg = sum/n;
    printf("%.2f",avg);
}