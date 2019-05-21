#include <stdio.h>
#include <string.h>

int main()
{
  char str1[27];
  char str2[27] = "abcdefghijklmnopqrstuvwxyz";
  char str3[54];
  for (int i = 0; i < 26; i++)
  {
    str1[i] = 0x61 + i -0x20;
    //printf("%c\n",str1[i]);
  }
  if (strcmp(str1, str2) == 0)
  {
    printf("the strings 1 and 2 are identical\n");
  }
    else
  {
    printf("the strings 1 and 2 are different\n");
  }
  strcat(str3, str1);
  strcat(str3, str2);
  printf("string1: %s\nstring2: %s\nstring3: %s\n", str1, str2, str3);
return 0;
}
