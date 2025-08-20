#include <iostream>
#include <string>
using  namespace std;
class Teacher{
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;
    //methods/member functions :- always write inside class 
    void changeDept(string newDept) // create changedept funct with new string declared as newDept
    dept= newDept; // old dept is updated and will update the old dept to newDept
}; // at the end of the class curly  brackets end with semicolon means we say that class teacher is closed

int main(){
    /*for Teacher we have created t1 as an object  
    meaning there can be t1,t2,t3,tn teachers who will have 
    different properties/attributes hence they will have same class but 
    different objects and their attributes
    */
    Teacher t1;
    t1.name="Mohak";
    t1.subject="CS";
    t1.dept=25000;
    cout << t1.name << endl;
    
    return 0;
}
