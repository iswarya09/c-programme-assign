#include <stdio.h>
  int main(void) {
    int i,n,t;
    printf("\n,enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      t=i*n;
      printf("\n %d*%d=%d",i,n,t);
    
    
  }
  return 0;
}