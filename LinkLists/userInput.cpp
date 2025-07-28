 //single node user input
 
 #include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int value;
    cout << "Enter the value: " ;
    cin >> value;

    //create node
    Node* first =new Node();
    first -> data = value;
    first -> next = NULL;

    cout << "You entered: " << first -> data << " -> " << "NULL" << endl;

}