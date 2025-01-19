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
    
void insertAtHead(node* &head, int val){  //&head is correct
        node* temp = new node(val);
        temp->next=head;
        head=temp; //remember this.
        return;
    }

void insertAtTail(node* &head,int val){
        node* temp = new node(val);
        node* temp1 = head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        
        return;

    }

void print(node* &head){
        if(head->next==NULL){
            cout<<"LinkedList is empty";
            return;
        }
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        return;
    }

void insertInMiddle(node* &head,int pos,int data){  //take 25 minutes to implement this code
    node* temp = new node(data); //created node to add in the middle i.e here temp node is going to inserted in the linkedList.
    node *prev;
    prev = head;
    int currPos=1;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    while(currPos!=pos-1){  //more correct is: (currPos<pos-1)
        prev=prev->next;
        currPos++;
    }
    temp->next=prev->next;
    prev->next=temp;
    return;
}

};

int main(){
    //created a new node
    node* head = new node(10);
    
    
    // head-> insertAtHead(head,12);
    // head-> insertAtHead(head,14);
    // head-> insertAtHead(head,16);
    // head-> insertAtHead(head,18);

    head->insertAtTail(head,20);
    head->insertAtTail(head,30);
    head->insertAtTail(head,40);
    head->insertAtTail(head,50);
    head->insertInMiddle(head,4,35);
    // cout<<"check:";
    head->insertInMiddle(head,1,5);
    head->print(head);
    
    
    return 0;
}