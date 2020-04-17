#include <stdio.h>
int main()
{
char string[60];
int i=0,v=0;
printf("enter a string");
gets(string);

for(i=0;string[i]!='\0';i++)
{
   if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
v++;  }
printf("vowels=%d",v);
return 0;
}