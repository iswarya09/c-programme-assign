#include <stdio.h>

void main(void)
{
  char str[10];
     int i;
  printf("\nEnter a string");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>=65 && str[i]<=90)
      (str[i]=str[i]+32);
   else 
      (str[i]=str[i]-32);
 }
  printf("\nConverted String:%s",str);
  return 0;
}