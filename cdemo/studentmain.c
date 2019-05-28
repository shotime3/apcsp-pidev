#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
  struct Student JohnSmith;
  struct Student JaneDoe;
  char input, name;

  strcpy(&JohnSmith.firstName, "John");
  strcpy(&JohnSmith.lastName, "Smith");
  JohnSmith.age = 16;
  JohnSmith.studentID = 123456;

  strcpy(&JaneDoe.firstName, "Jane");
  strcpy(&JaneDoe.lastName, "Doe");
  JaneDoe.age = 15;
  JaneDoe.studentID = 011235;
  
  printf("Which student(s)?\n");
  fgets(&input, 256, stdin);
  sscanf(&input, "%c", &name);
  printStudent(struct Student* name);
}
