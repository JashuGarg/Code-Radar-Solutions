// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int rollno[1000];
    char name[n][100];
    float marks[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&rollno[i],name[i],&marks[i]);
    }

    int limit ;
    int count = 0 ;
    scanf("%f",&limit);

    for (int i=0;i<n;i++){
        if (marks[i]>limit)
            count++;
    }

    printf("Count of students scoring above %.2f: %d",limit,count);
}