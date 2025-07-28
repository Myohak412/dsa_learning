#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){

int val1, val2;
cout << "Enter the value for first node:  ";
cin >> val1;

cout << "Enter the value for first node:  ";
cin >> val2;

//creating the first node
Node* first = new Node();
first -> data = val1;
first -> next = NULL;
//creating for second node
Node* second = new Node();
second -> data = val2;
second -> next = NULL;
//connection
first -> next = second;

Node* temp = first;
while(temp != NULL ){
    cout << temp -> data << " -> ";
    temp = temp -> next;
}
cout << " Null " << endl;

return 0;
}
\end{code}
