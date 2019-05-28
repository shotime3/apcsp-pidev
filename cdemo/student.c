#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int studentID;
};

void printStudent(struct Student* student) {
  printf("Student:\n");
  printf("Name: %s %s\n",student -> firstName, student -> lastName);
  printf("Age: %d\n", student -> age);
  printf("Student ID: %d\n", student -> studentID);
}

int main() {
  int numStudent;
  char strInput[256];
  printf("How many students do you want to enter: \n");
  fgets(strInput, 256, stdin);
  sscanf(strInput, "%d", &numStudent);
  struct Student student[numStudent];
  for (int i = 0; i < numStudent; i++) {
    printf("You are entering student number %d\n", i);
    printf("First Name: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%s", student[i].firstName);
    printf("Last Name: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%s", student[i].lastName);
    printf("Age: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%d", &student[i].age);
    printf("Student ID: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%d", &student[i].studentID);
  }
  for (int i = 0; i < numStudent; i++) {
    printStudent(&student[i]);
  }
}
