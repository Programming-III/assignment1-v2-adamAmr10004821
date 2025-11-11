#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class course{
private :
       string courseCode;
       string courseName;
       int maxStudents;
       Student * students;
      int currentStudents;


public:

void addStudent(const Student & s);
void diplayCourseInfo();
course();
course(string courseCode, stirng courseNmae , int maxStudents, int currentStudents);











};














#endif
