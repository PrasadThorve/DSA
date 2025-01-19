#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    void print(Node* &head){
        Node* temp = head;
        cout<<"head = ";
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;

    }

    int getLength(Node* &head){
        Node* temp = head;
        int size = 1;
        while(temp->next!=NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }

    void insertAtHead(int data, Node* &head){
        Node* temp = new Node(data);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }

    void insertAtTail(int data,Node* &head){
        Node* temp = new Node(data);
        Node* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }

    void insertAtPosition(int position, int data, Node* &head){
        Node* temp = new Node(data);
        Node* curr = head;
        for(int i=1;i<position;i++){
            curr = curr->next;
        }
        
    }

};

int main() {

    Node* head = new Node(10);
    head->print(head);
    cout<<"size of LinkedList = "<<head->getLength(head)<<endl;

    head->insertAtHead(12,head);
    head->insertAtHead(14,head);

    head->print(head);
    cout<<"size of LinkedList = "<<head->getLength(head)<<endl;

    head->insertAtTail(8,head);
    head->insertAtTail(6,head);

    head->print(head);
    cout<<"size of LinkedList = "<<head->getLength(head)<<endl;



    
    
    return 0;
}