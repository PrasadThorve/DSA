#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

    void insertAtHead(node* &head,int val){
        node* temp;
        temp->data=val;
        temp->next=head;
        temp=head;
        return;
    }

    void print(node* &head){
        node* temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        return;
    }
};

int main(){
    node* head = new node(10);
    head->insertAtHead(head,20);
    head->insertAtHead(head,30);
    head->insertAtHead(head,40);
    head->insertAtHead(head,50);
    head->print(head);
    return 0;
}