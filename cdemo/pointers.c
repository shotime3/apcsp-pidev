#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", &a);

  int d = 8;
  int e = 1;
  printf("The value of d is %d and the address of d is %p\n", d, &d);
  printf("The value of e is %d and the address of d is %p\n", e, &e);

  int* ptrtod = &d;
  int* ptrtoe = &e;
  int temp;
  temp = e;
  e = *ptrtod;
  d = temp;

 printf("the value of d is now %d\n",d);
  printf("the value of e is now %d\n",e);
}
