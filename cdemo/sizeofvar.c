#include<stdio.h>

int main()
{
  int a = 666;
  char c = 'i';
  float f = 76.123;
  double d = 245.924;
  unsigned int i = 3;
  signed int k = 3;
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char c: %c and size: %c bytes\n", c, sizeof(c));
  printf("float f: value: %f and size: %f bytes\n", f, sizeof(f));
  printf("double d: %f and size: %f bytes\n", d, sizeof(d));
  printf("unsigned int i value: %d and size: %d bytes\n", i, sizeof(i));
  printf("signed int k  value: %d and size: %d bytes\n", k, sizeof(k));
}
