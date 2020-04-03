#include <stdio.h>
   int main(void) {
    /*input principle,rate and time*/
    double P;
    double R;
    double T;
    double SI;
    printf("enter principle:");
    scanf("%lf", &P);
    printf("enter rate:");
    scanf("%lf", &R);
    printf("enter time period:");
    scanf("%lf", &T);
    /*calculate simple interest*/
    SI=(P*R*T)/100;
    /*print resultant of simple interest*/
    printf("simple interest is %d",SI);
  return 0;
}