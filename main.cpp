#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

 void Person :: display() const {
         cout<<"name:"<<name<<endl;
         cout<<"id:"<<id<<endl;
     }






// ==================== Student Class Implementation ====================
void Student :: display()  {
            cout <<"year level:"<<yearlevel<<endl;
            cout<<"major:"<<major<<endl;

        }





// ==================== Instructor Class Implementation ====================

 void Instructor::display() {
     cout<<"depertment"<<department<<endl;
         cout<<"the experince years :"<<experienceYears<<endl;
 }




// ==================== Course Class Implementation ====================


void Course::displayCourseInfo() {
     cout<<"course code:"<<courseCode<<endl;
         cout << "course name :" << coursename<<endl;
         cout << "the max number of student :"<< maxstudents;
         cout<< "students :"<<students<<endl;
         cout<<" current student :"<<currentstudent<<endl;
 
 }
void Course :: addstudents(const Student&s){
Student s = new students();





// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
