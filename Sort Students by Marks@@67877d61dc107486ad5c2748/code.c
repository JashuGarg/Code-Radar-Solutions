// Your code here...
#include <stdio.h>
#include <string.h>

int main (){
    int n;
    scanf("%d",&n);
    int rollno[1000];
    char name[n][100];
    float marks[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&rollno[i],name[i],&marks[i]);
    }
    //sorting a marks array
    for(int i=0;i<n;i++){
        int isswapped = 0;
        for (int j=0;j<n-i-1;j++){
            if(marks[j+1]<marks[j]){
                // Swap marks
                float tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                // Swap roll numbers
                int tempRoll = roll[i];
                roll[i] = roll[j];
                roll[j] = tempRoll;

                // Swap names
                char tempName[50];
                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
        if (isswapped=0)
            break;
    }

    //printing according to the marks

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (marks)
        }
    }



}
