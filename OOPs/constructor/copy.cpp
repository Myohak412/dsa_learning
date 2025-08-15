/*Copy Constructor- Special Constructor(default)used to copy properties of one object into another.
*/
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    string name;
    string subject;
    string dept;

 
    
    //parameterized
    Teacher(string name,string dept,string subject){
        this->name =name;
        this->dept =dept;
        this->subject=subject;
    }
    //copy constructor
    Teacher(Teacher &orgObj) {
        cout <<"I am copy constructor"<<endl;
        this->name = orgObj.name;
        this->dept =orgObj.dept;
        this->subject= orgObj.subject;
    }
       
    void getInfo(){
        cout << "name: "<<name<<endl;
        cout << "department:"<<dept<< endl;
        cout << "subject:"<<subject<<endl;
    }
 
};
int main(){
    Teacher t1("Kanika","Computer Science", "java");
    //t1.getInfo();
    Teacher t2(t1); //custom copy constructor invoke
    t2.getInfo();
    return 0;
}

/*LINE 22-  means that or we have use pass by refrence 
It will not copy the parameterized Teacher contructor.It will just show the address of that contructor
and original object i.e(orgObj) we can created means that whatever we update or change in original object will
be reflected in parameterized contructor
*/