#include <stdio.h>

int main()
{
  int a = 0;
  int b = 4;
  
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
   if (a != b)
   {
    printf("a is not equal to b\n");
   }
  }

  if (b >= a)
  {
   printf("b is greater than or equal to a\n");
  }

  if (a == 0 && b == 0)
  {
   printf("a and b are equal to 0\n");
  }
  else
  {
   printf("only a or b is equal to 0\n");
  }

  if (!(b == 0))
 {
  printf("true!!! b =/= 0\n");
 }

}
