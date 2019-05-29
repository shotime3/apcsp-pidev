#include "student.h"

int printStudent(struct Student* student) {
  printf("Student:\n");
  printf("Name: %s %s\n",student -> firstName, student -> lastName);
  printf("Age: %d\n", student -> age);
  printf("Student ID: %d\n", student -> studentID);
  return 0;
}
