#include <stdio.h>
#include <conio.h>
void main()
{
  int num,res=0;
  clrscr();
  printf("\nenter a number: ");
  scanf("%d",&num);
  res=prime(num);
  if(res==0)
    printf("\n%dis a prime number",num);
  else
    printf("\n%dis not a prime number",num);
  getch();
}
int prime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i!=0)
      continue;
    else
      return 1;
  }
  return 0;
}