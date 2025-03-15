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
    int index;
    int min = INT_MAX;
    for (int i=0;i<n;i++){
        if (marks[i]<min)
        {
            index=i;
            min = marks[i];
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",rollno[index],name[index],marks[index]);
}