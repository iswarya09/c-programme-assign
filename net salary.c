#include <stdio.h>
   int main() {
     
   
   int netsalary,basic,da,ta;
   printf("enter basic salary ");
   scanf("%d",&basic);
       da=(10*basic)/100;
       ta=(12*basic)/100;
       netsalary= basic+da+ta;
   printf("\n net salary:%d",netsalary);
    return 0;
    }