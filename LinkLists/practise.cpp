#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    int val1;
    Node* head = new Node();

    head -> data = val1;
    head -> next = NULL;

    cout <<" enter the value of head is:  "; 
    cin >> val1;
   cout <<" the value of head is is:  " << val1 << endl;
    cout << val1 << "-> Null" << endl;

    return 0;
}