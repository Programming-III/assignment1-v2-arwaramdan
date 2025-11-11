#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course : public Person {
private :
    string courseCode;
    string coursename;
    int maxstudents;
    Student* students;
    int currentstudent;
public :
    void addstudents(const Student&s);
    void displayCourseInfo();
  Course();




};













#endif
