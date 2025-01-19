#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    void insertAtHead(node *&head, int val)
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp; // re
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
    void print(node *&head)
    {
        node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<"NULL";
        return;
    }

    void reverseLinkedList(node* &head){
        node* temp1; node* temp2; node* temp3;
        temp1=temp2=head;
        cout<<"headnext"<<head->next<<endl;
        temp1->next=NULL;
        temp3=head->next;
        cout<<"temp2next"<<temp2->next<<endl;
        while(temp2->next!=NULL){
            
            temp2=temp3;
            temp2->next=temp1;
            temp1=temp2;
            temp2=temp3;
            temp3=temp3->next;
            cout<<temp1->data;
        }
        
        return;

    }
        
};

int main()
{
    node *head = new node(10);
    cout<<"Head="<<head->data<<endl<<"LinkedList:";
    // head->insertAtHead(head, 20);
    // head->insertAtHead(head, 30);
    // head->insertAtHead(head, 40);
    // head->insertAtHead(head, 50);
    head->insertAtTail(head,20);
    head->insertAtTail(head,30);
    head->insertAtTail(head,40);
    head->insertAtTail(head,50);
    head->print(head);
    cout<<endl<<"head->next"<<head->next<<endl;
    head->reverseLinkedList(head);
    return 0;
}