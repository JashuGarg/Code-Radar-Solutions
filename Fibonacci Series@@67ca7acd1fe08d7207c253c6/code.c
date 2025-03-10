#include <stdio.h>
// Your code here...M
void fibonacciSeries(int n){
    int a = 0;
    int b = 1;
   printf("%d %d",a,b);
    for (int i=2;i<n+2;i++){
      int c = a+b;
        a = b;
        b = c;
        printf(" &d",c);
    }
}