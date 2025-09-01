#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
    float salary;

    public:
    string name;
    string subject;

    int id;

    //setter- set value for private
    void setSalary(float s){
         salary= s;
    }
    //getter
    getSalary(){
        return salary;
    }

};
int main(){
    Teacher t1;
    t1.name= "Mohak";
    t1.subject= "Javascript";
   
    t1.setSalary(120000.00);

    cout << t1.getSalary() << endl;
    cout << t1.name << endl;
 return 0;
}