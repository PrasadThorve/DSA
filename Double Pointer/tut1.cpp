#include<iostream>
using namespace std;

int update(int **p2){
    
}

int main() {
    int i = 5;
    int *p = &i;
    int** p2 = &p;

    cout<<"before"<<endl;
    cout<<p2<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<"after update: "<<endl;
    cout<<p2<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    return 0;
}