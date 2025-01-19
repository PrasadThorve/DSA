#include<iostream>
#include<map>
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
        temp->next = NULL;
    }

    void insetAtPostion(int n, int data, node* &head){
        // cout<<"insertAtPosition"<<endl;
        node* mid = new node(data);
        // cout<<"mid->data = "<<mid->data<<endl;
        node* prev = head;
        for(int i=0;i<n-2;i++){
            prev = prev->next;
        }
        // cout<<"prev-data = "<<prev->data<<endl;
        node* after = prev->next;
        // cout<<"after->data = "<<after->data<<endl;

        prev->next = mid;
        mid->next  = after;

    }

    void deleteNode(int position, node* &head){
        node* prev = head;
        for(int i=0;i<position-2;i++){
            prev = prev->next;
        }
        // cout<<"prev->data = "<<prev->data<<endl;
        node* temp = prev->next;
        // cout<<"temp->data = "<<temp->data<<endl;
        node* after = temp->next;
        // cout<<"after->data = "<<after->data<<endl;

        prev->next = after;

        delete temp;
        // cout<<"temp->data = "<<temp->data<<endl;
        
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

    bool detectLoop(node* &head){
        node * temp = head;
        if(head = NULL){
            return false;
        }
        map <node*,bool> visited;
        while(temp->next!=NULL){
            if(visited[temp]==true){
                return 1;
            } else {
                visited[temp]=true;
                temp = temp->next;
            }
        }
        return false;
    }

    void loopCreation(node* &head){
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        // cout<<"temp->next : "<<temp->next;/
        temp->next = head->next->next;
    }

    void floydCycleDetection(node* &head){
        node* slow = head;
        node* fast = head;
        while(fast->next != NULL && fast->next->next!=NULL){
            slow=slow->next;
            cout<<"slow = "<<slow->data<<endl;
            fast= fast->next->next;
            cout<<"fast = "<<fast->data<<endl;
            if(slow==fast){
                cout<<"cycle is present";
                return;
            }
        }
        // cout<<"fast = "<<fast<<endl;
        // cout<<"fast->next = "<<fast->next<<endl;
        cout<<"cycle is not present";
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

    // head->loopCreation(head);

    // head->traverseLL(head);
    
    head->floydCycleDetection(head);
    // cout<<"is loop preseent = "<<head->detectLoop(head);





    return 0;
}