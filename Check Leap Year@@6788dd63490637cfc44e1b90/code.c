// Your code here...
#include <stdio.h>
int main (){
    int n;
    scanf("&d",&n);

 
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
    printf("Leap Year");
}else (
    printf("Not a Leap Year");
)