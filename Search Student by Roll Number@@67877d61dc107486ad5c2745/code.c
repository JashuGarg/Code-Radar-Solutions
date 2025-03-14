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
    int target;
    scanf("%d",&target);
    int isprint = 0;
    for (int i=0,i<n;i++){
        if (rollno[i]==target){
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",rollno[i],name[i],marks[i]);
            isprint= 1;
        }
    }
    if (!isprint){
        printf("Student not found");
    }
   
}