#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    float threshold;
    int count;

    for(int i=1;i<=n;i++){
        int rollno;
        char name[100];
        float marks;
        scanf("%d %s %f",&rollno,name,&marks);
        if (marks>=threshold){
            count++;
        }
    }
    scanf("%f",&threshold);

    printf("Count of students scoring above %.2f: %d", threshold,count);
}