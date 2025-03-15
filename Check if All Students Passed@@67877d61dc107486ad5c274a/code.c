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
    int allpassed = 1;
    for(int i=0;i<n;i++){
        if (marks[i]<50){
            allpassed = 0;
        }
    }

    if (allpassed)
        printf("All Passed");
    else
        printf("Not All Passed");
}