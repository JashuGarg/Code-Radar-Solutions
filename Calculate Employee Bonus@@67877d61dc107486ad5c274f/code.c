// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int rollno[1000];
    char name[n][100];
    int sal[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %d",&rollno[i],name[i],&sal[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (sal[i]<50000){
            float bonus = (10/100)*sal[i];
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",rollno[i],name[i],bonus);
            }
        else {
            float bonus = (5/100)*sal[i];
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",rollno[i],name[i],bonus);
    }
    }

}