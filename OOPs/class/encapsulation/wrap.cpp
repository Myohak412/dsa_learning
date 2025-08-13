/*Encapsulation- It is wrapping up of data & member of fuction in a single unit called class
 evdha lakshat thev bhaava 😂
First pillar of OOP
  ---------------------------------------
 |    data/            |       Member    |
 |      properties     |       function  |
  ----------------------------------------
Single capsule that has 2 things - attributes and methods
Apan already cover kela ahe classes mdhe .. Already declared prop and func()
- helps for data hiding eg. - salary, bank_account, password
-sensitive infomation cannot be leaked using modifiers namely- private
-Public access modifier is used to make common info available to all 
*/
#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    double password;
    double fees;

    public:
    string name;
    int id;
    int roll;
    char div;
    string dept;

    void changediv(char newdiv){
    div =newdiv;
    }
    //setter
    void setPassword(double newPass){
        password = newPass;
    }
    //getter
    double getPassword(){
        return password;
    }
};
int main(){
    Student s1;
    s1.setPassword(290002);
    s1.changediv('A');
    cout <<"Division: "<< s1.div << endl;

    cout << "Password: "<<s1.getPassword() << endl;
    return 0;
}
