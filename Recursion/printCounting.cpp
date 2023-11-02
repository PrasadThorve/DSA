#include<iostream>
using namespace std;

void revCounting(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<endl;
    
    //r.r
    revCounting(n-1);
    
}

void strCounting(int n){
    //base case
    if(n==0){
        return;
    }

    //Recursive Relation
    strCounting(n-1);

    //processing
    cout<<n<<endl;

    
}

int main() {
    int n;
    cin>>n;
    cout<<"Counting from n to 1"<<endl;
    revCounting(n);
    cout<<"Counting from 1 to n"<<endl;
    strCounting(n);
    return 0;
}