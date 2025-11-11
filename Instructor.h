#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class instructor:: public person{
  private:

  string department;
int experienceYears;


public:
void display();
instructor();
instructor(string department , int experienceYears);
~instructor();



};











#endif
