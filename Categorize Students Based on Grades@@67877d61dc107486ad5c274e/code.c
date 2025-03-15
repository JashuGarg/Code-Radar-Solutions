// Your code here...// Your code here...
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

    for(int i=0;i<n;i++){
        char grade;
        if (marks[i]>=85.00)
            grade = 'A';
        else if (marks[i]<=84.99 && marks[i]>=70.00)
            grade = 'B';
        else 
            grade = 'C';
        
        printf("Roll Number: %d, Name: %s, Grade: %c\n",rollno[i],name[i],grade);
    }
}