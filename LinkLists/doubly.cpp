// bool codingTime = false;
// sleepMode();
//Ek ek node jodke hi poori DSA train banti hai!

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
    second->data = 20;

    head->next = second; //pehle node ka next -> second node   i.e connecting first node to second node
    second->next = NULL;  //dusre node ka next NULL hai

    Node* temp = head;
    while (temp !=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;

    }

    cout << "NULL" << endl;
    return 0; 
}