#include <iostream>
using namespace std;



int main(){

    struct Node {
        int data;
        Node* next;
    };

    Node* head;
    head = NULL;

    Node* temp = new Node;  // using malloc function -->
    temp->data = 2; // complete code --> ()
    temp->next = NULL;
    head = temp;
    cout<<"head="<<head->data<<endl;
    // cout<<"head->next="<<head->next;
    
    //Coe to Traverse to end of the LinkedList
    Node* temp1 = new Node;
    temp1 = head;
    
cout<<"check="<<head->data;
    head->next=temp;
    temp->data=4;
    cout<<"check="<<head->data;
    head->next->next=temp;
    temp->data=6;
    temp->next=NULL;
    
    

    cout<<"check="<<head->data;
    temp1 = head;
    cout<<"Traversal->"<<head->data;
    while(temp1->next != NULL){
        cout<<temp1<<"->";
        temp1=temp1->next;
    }

    cout<<head->data<<endl;
    
    return 0;
}