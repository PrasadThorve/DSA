#include<iostream>
using namespace std;

int main() {
    int num = 5;
    int *p = &num;
    cout<<"*p = "<<*p<<endl;
    cout<<"p="<<p<<endl;
    int *q = p;
    cout<<"*q="<<*q<<endl;
    cout<<"q="<<q<<endl;
    cout<<"&p = "<<&p<<endl;
    cout<<"&q="<<&q<<endl;
    q = q +1;
    cout<<"q+1 = "<<q<<endl;
    char a = 'a';
    cout<<"size of a "<<sizeof(a)<<endl;
    cout<<"size of 'a':"<<sizeof('a')<<endl;

    return 0;
}