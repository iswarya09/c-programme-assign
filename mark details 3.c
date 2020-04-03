#include <stdio.h>
int main(void) {
  char studentName[] = "Sneha";
  char studentSchool[] = "SNVHSS Angadical";
  int studentAge = 17;
  int studentMark = 89;
  int studentClass = 11;
  printf ("%s is %d years old\n",studentName,studentAge);
  printf ("%s is studying in %dth standard at %s\n",studentName,studentClass,studentSchool);
  printf ("%s got %d percent mark in last final year exam\n",studentName,studentMark);
  
   return 0;
}