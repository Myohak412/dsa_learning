#include <iostream>
#include <string>
using  namespace std;
class Teacher{
    private:       //data and methods are accessible inside class
    double salary; // now this becomes private

    public:        //data & methods accessible to everyone
    //properties or attributes
    string name;
    string dept;
    string subject;
   // double salary; //see here salary is kept private and only accesible to account dept so its preferred to kept private
//make it private


    //methods/member functions :- always write inside class 
    void changeDept(string newDept) {// create changedept funct with new string declared as newDept
    dept= newDept; // old dept is updated and will update the old dept to newDept
    }
    //setter - sets value for private 
    void setSalary(double s){
        salary = s;
    }
    //getter - returns value of setter only for private
     getSalary(){
        return salary;
    }





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
    t1.setSalary(25000); // dekh maine salary set method se daali hai
    cout << t1.name << endl;
    
    cout << t1.getSalary() << endl;// muzhe dekhna hai sachmai salary set hui hai kya isilye get method se dekh rahi hu
    
    return 0;
}


// ho gaya bhai itna bas hua :)
