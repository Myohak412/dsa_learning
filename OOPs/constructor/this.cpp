/* this is a special pointer in c++ that points to the current object properties
this->prop is same as *(this).prop
*/
#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
    string name;
    string dept;
    string role;

    //parameterized constructor
    Employee(string name,string dept, string role){
        //Note- this->name refers to the property of that object declared in public
        //Note- and right name,dept,role are the parameters declared inside Employee(string name, etc)
        this->name = name;
        this->dept = dept;
        this->role = role; 
    }
    void getInfo(){
        cout << "Name: " << name<< endl;
        cout << "Department :" <<dept << endl;
         cout << "Role :" << role<< endl;
    }
};
int main(){
    Employee e1("Mohak","Web Dev","Developer");
    cout << "Your Information: "<< endl;
    e1.getInfo();
    return 0;
}