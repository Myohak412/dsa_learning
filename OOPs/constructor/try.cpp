/*Constructor-  Special method invoked automatically at the time of object creation.
Used for initialization
-Same name as class
-doesnt have return type
-always constructor are declared in public  modifier
- memory allocation happens when constructor is called(allocated for only objects and not classes)
-Two types of constructor- 1)Non-Parameterized  2)Parameterized 3) Copy
*/

#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public: 
    //1) Non parameterized- no parameters inside paranthesis
    Teacher(){
        cout << "-Hi I am Constructor I am example of non parameterized contructor\n";
    }
    //2) Parametrized
    Teacher(string n,string d, string s){
        name =n;
        dept= d;
        subject=s;
    }



    string name;
    string dept;
    string subject;

    //inside class write methods
    void changedept(string newdept){
        dept=newdept;
    }
    void getInfo(){
        cout << "-This is an example of Paramaterized constructor"<< endl;
        cout<< "Name:- " <<name << endl;
        cout<< "Subject:- "<< subject << endl;
        cout <<"department:- "<< dept << endl;

    }
};

int main(){
    Teacher t1;// for non-parameterized
    t1.dept= "Computer Science";
    cout << t1.dept << endl;
    // for parameterized
    Teacher t2("Mohak","computer-Science","c++");
     t2.getInfo();
    return 0;
}