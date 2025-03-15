// Your code here...
#include <stdio.h>
#include <limits.h>
int main (){
    int n;
    scanf("%d",&n);
    int rollno[1000];
    char name[n][100];
    float marks[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&rollno[i],name[i],&marks[i]);
    }
    int max = INT_MIN;
    int index ;
    for (int i=0;i<n;i++){
        if (marks[i]<max)
            index = i;
    }
    printf("Top Scorer: Roll NUmber: %d, Name: %s, Marks: %.2f",rollno[index],name[index],marks[index]);
}