#include <iostream>
using namespace std;

// ek structure banao
struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node(); //ek node banaya
    head->data = 10;  //usme value dali
    head->next = NULL; // aage kuch nhi
    cout <<   "Node ke andar kya hai: " << head->data << endl;
    return 0;
}