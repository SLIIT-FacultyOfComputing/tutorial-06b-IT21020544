#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int id , char na[]) {
  studentId = id;
  strcpy(name, na);
  }

// Display StudentId and Name
void Student::display() {
  cout << "Student ID:"<<studentID<<endl;
  cout << "Name:"<<name;
}
