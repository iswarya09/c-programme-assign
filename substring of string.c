#include<stdio.h> 
int main()
{
  char str[20],sub[20];
int position,length,c=0;
printf("input a string\n");
gets(str);
printf("enter the position and length of substring\n");
scanf("%d%d",&position,&length);
while(c<length)  {
  sub[c]=str[position+c-1];
  c++;
}
sub[c]='\0';
printf("required substring is\"%s\"n",sub);
return 0;
}