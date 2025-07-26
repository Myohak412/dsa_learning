#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    //first node
    Node* head =new Node();
    head->data =10;

    // second node 
    Node* second = new Node();
    head->data = 20;

    //pehle node ka next -> second node 
    head->next = second;

    //dusre node ka next NULL hai
    second->next = NULL;

    Node* temp =head;
    while (temp !=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;

    }

    cout << "NULL" << endl;
    return 0; 
}