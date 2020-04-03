#include <stdio.h>
  int main(void) {
    char name [30];
    printf("enter your name:");
    fgets(name,30,stdin);
    printf("student's name is %s",name);
    double num1;
    double num2;
    printf("enter your physics mark: ");
    scanf("%lf", &num1);
    printf("enter your chemistry mark: ");
    scanf("%lf", &num2);
    printf("average mark of the student is %f",(num1+num2)/2);
     return 0;
}