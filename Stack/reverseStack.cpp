#include<iostream>
using namespace std;

class Stack{
    public:
        char *arr;
        int top;
        int size;

        Stack(int size){
            arr = new char[size];
            top = -1;
            this->size = size;
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

    char peek(){
        if(!isEmpty()){
            // cout<<"Peek Element : "<<arr[top]<<endl;
            return arr[top];
        } else {
            // cout<<"Stack is empyt"<<endl;
            return '0';
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

    string myString = "prasad thorve";

    Stack * str = new Stack(100);

    for(char a: myString){
        str->push(a);
    }

    string reversed = "";

    while(!(str->isEmpty())){
        reversed.push_back(str->peek());
        str->pop();
    }

    cout<<"Reveresed String : "<<reversed<<endl;
    
    return 0;
}