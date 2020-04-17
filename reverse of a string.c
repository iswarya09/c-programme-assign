#include <stdio.h>
 int main(void)
{
  char str[100];
  int i,c=0;
  printf("\n Enter a string");
  gets(str);
  for(i=0;str[i]!='\0';i++) 
  c++;
  printf("\nstring Reverse\n");
  for(i=c-1;i>=0;i--)
  printf("%c",str[i]);
  return 0;
}