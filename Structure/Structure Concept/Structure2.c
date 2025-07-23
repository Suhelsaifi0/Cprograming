#include <stdio.h>

struct student{
  int id;
  int marks;
  char fav_char;
} suhel, zaid, shadab;

void main()
{

  // struct student suhel, zaid, shadab;
  suhel.id = 1;
  zaid.id = 2;
  shadab.id = 3;
  suhel.marks = 467;
  zaid.marks = 456;
  shadab.marks = 478;
  suhel.fav_char = 'P';
  zaid.fav_char = 'P';
  shadab.fav_char = 'P';

  printf("Marks of Suhel is :  %d \n", suhel.marks);
  printf("ID of Suhel is :  %d \n", suhel.id);
}
