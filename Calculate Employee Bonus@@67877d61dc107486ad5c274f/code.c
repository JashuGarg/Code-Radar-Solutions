// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int rollno[1000];
    char name[n][100];
    int sal[100];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&rollno[i],name[i],&sal[i]);
    }
    for(int i =0;i<n;i++)
    {
        if (sal[i]<50000)
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",rollno[i],name[i],(10/100)*sal[i]);
        else 
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",rollno[i],name[i],(5/100)*sal[i]);
    }
}