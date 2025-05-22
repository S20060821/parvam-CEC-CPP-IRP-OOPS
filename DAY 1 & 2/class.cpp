#include<iostream>
using namespace std;
//syntax
//class class_name //class Decleration
class Student{
 public:
   string name,college,branch; // Data
   int sem;

   void show(){ // member function
     cout<< "Name:" << name <<endl;
     cout<< "College:" << college <<endl;
     cout<< "Branch:" << branch <<endl;
     cout<< "Semister:" << sem <<endl;
   }

};

int main(){
    Student student1; //object creation
    student1.name = "sathyam";//assigning the value to the class using object
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 8;
    
    Student student2; //object creation
    student2.name = "zain";//assigning the value to the class using object
    student2.college = "CEC";
    student2.branch = "AIML";
    student2.sem = 8;
 
    student1.show();
    student2.show();

}