#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        Node *reverse(Node* head){
            Node* curr = head;
            Node* prev;
            Node* after;
            prev->next=NULL;
            prev->data=curr->data;
            while(curr->next!=NULL){
                after = curr->next;
                curr=curr->next;
                curr->next=prev;
                prev = curr;
                curr = after;
            }
            head = prev;
            return head;
        }

        void traverse_LL(Node* head){
            Node * curr = head;
            cout<<"head : ";
            while(curr->next!=NULL){
                cout<<curr->data<<"->";
                curr=curr->next;
            }
            cout<<"NULL.";
        }

        

};

int main() {
    
    Node* head = new Node(10);
    Node* one = new Node(11);
    head->next = one;
    Node* two = new Node(12);
    one->next = two;
    Node* three = new Node(13);
    two->next = three;
    // Linked List : 10->11->12->13->NULL

    head->traverse_LL(head);


    return 0;
}