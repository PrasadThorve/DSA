#include<iostream>
using namespace std;

int main() {
    int arr[6]={1,2,3,4,5,6};
    cout<<arr<<endl;  // This print address
    // char ch[6]="abcde";
    // cout<<ch<<endl; // but in char array it prints 
    // char *ptr = &ch[0];
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    int *p = &arr[0];
    cout<<p<<endl;
    cout<<"temp=z"<<endl;
    char temp ='z';
    char *x = &temp;
    cout<<"value: "<<*x<<endl;
    cout<<"address: "<<x<<endl;
    return 0;
}