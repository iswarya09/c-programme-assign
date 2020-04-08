#include <stdio.h>
  int main(void){
  int age;
  printf("age of the person:");
  scanf("%d",&age);
  if(age>=60){
    printf("pension amount is 10000");
 } else if (age>=50){
    printf("pension amount is 5000");
 }else {
   printf("no pension");
   }return 0;
}