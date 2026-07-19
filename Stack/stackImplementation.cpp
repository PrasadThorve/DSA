#include<iostream>
using namespace std;

class Stack{
    public:
        int size;
        int *arr;
        int top;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    //methods
    void push(int element){
        if(top==(size-1)){
            cout<<"Stack is full"<<endl;
        }
        else {
            top++;
            arr[top]=element;

        }
        
    }

    void pop(){
        if(!isEmpty()){
            cout<<"Element popped : "<<arr[top]<<endl;
            arr[top]=-1;
            top--;  
        } else {
            cout<<"Stack is empty cannot be popped."<<endl;
        }
    }

    void peek(){
        if(!isEmpty()){
            cout<<"Peek Element : "<<arr[top]<<endl;
        } else {
            cout<<"Stack is empyt"<<endl;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {

    Stack* s = new Stack(5);

    s->push(4);
    s->push(6);
    s->push(7);

    s->peek();

    s->pop();

    s->peek();
    
    return 0;
}

