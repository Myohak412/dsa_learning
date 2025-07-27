#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head = new Node();
    head -> data = 10;
    
    Node* second = new Node();
    second -> data = 20;
    head -> next = second;

    Node* third = new Node ();
    third -> data = 30; 
    second -> next = third;

    third -> next = NULL; 

    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;


    }
    cout << "NULL" << endl;
    return 0;
}