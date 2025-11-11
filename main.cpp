#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

person::person(){
this-> name = "Nan";
this-> id = 0;
}
person::person(string name , int id){
this->name = name;
this-> id = id;
   }

void person::display(){
cout<< " Name: " << this->name<<endl;
cout << " ID: " <<this->id;
}


person::~person(){
}






student::student(){
this-> yearLevel = 0;
this-> major = "NaN";
}
student::student(int yearLevel , string major)::person(string name , int id){
this->yearLevel = yearLevel;
this->major = major;
}

void student::display(){
person::display();
cout << " Major: " << this-> major<<endl;;
cout<< " Year Level " << this-> yearLever<<endl;
}
student::~student(){
}





istructor::instructor(){
this-> department = "NaN";
this-> experienceYears = 0;
}
instructor::instructor (string department , int experienceYears)::person(string name , int id){
this-> department = department;
this-> experienceYears = experienceYears;
}
instructor::~instructor(){
}
void instructor:: display(){
person::display();
cout<< "department" << this->department<<endl;
cout<<" Experience Year" << this-> experienceYears<< endl;

}

course::course(){
this-> courseCode = " NaN";
this-> courseName = " Null";
this->maxStudents = 0;
this->currentStudents = 0;
}
course::course(string courseCode, stirng courseNmae , int maxStudents, int currentStudents){
this->courseCode = courseCode;
this-> courseName = courseName 





// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
