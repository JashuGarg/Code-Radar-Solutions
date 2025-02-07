#include <stdio.h>
int main() {
  int a;
  scanf("%d",&a);
  if(a>0){
    printf("True");
  }
  else if (a<0){
    printf("False");
  }
  else{
    printf("Zero");
  };
}