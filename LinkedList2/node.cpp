#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    void insertAtHead(int data, node* &head){
        node* temp = new node(data);
        temp->next=head;
        head=temp;
    }

    void traverseLL(node* &head){
        cout<<"head = "<<head->data<<"->";
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            cout<<temp->data<<"->";
        }
        cout<<"NULL"<<endl;

    }

    

};

int main() {
    //creating head
    node *head = new node(10);

    // cout<<"head = "<<head->data<<endl;
    // cout<<"head->next = "<<head->next<<endl;

    head->insertAtHead(12,head);
    head->insertAtHead(14,head);
    head->insertAtHead(16,head);
    head->insertAtHead(18,head);
    head->insertAtHead(20,head);

    head->traverseLL(head);

    return 0;
}