// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int rollno;
        char name[100];
        float marks;
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",rollno,name,marks);
    }
}