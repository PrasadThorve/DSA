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

    void insertAtTail(int data, node* &head){
        node* tail = new node(data);
        node* temp = head;
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        // cout<<"temp->next = "<<temp->next<<endl;
        temp->next = tail;
    }

    void insetAtPostion(int n, int data, node* &head){
        cout<<"insertAtPosition"<<endl;
        node* mid = new node(data);
        cout<<"mid->data = "<<mid->data<<endl;
        node* prev = head;
        for(int i=0;i<n-2;i++){
            prev = prev->next;
        }
        cout<<"prev-data = "<<prev->data<<endl;
        node* after = prev->next;
        cout<<"after->data = "<<after->data<<endl;

        prev->next = mid;
        mid->next  = after;

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

    head->insertAtTail(8,head);
    head->insertAtTail(6,head);
    head->insertAtTail(4,head);
    head->insertAtTail(2,head);

    head->traverseLL(head);

    head->insetAtPostion(3,17,head);

    head->traverseLL(head);



    return 0;
}