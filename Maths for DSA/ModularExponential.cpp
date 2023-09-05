#include<iostream>
using namespace std;

int fastPower(int a, int b){
    int ans=1;
    if(b%2==0){
        for(int i=0;i<b/2;i++){
            ans=ans*a;
        }
        return ans*ans;
    }
    else{
        for(int i=0;i<b/2;i++){
            ans=ans*a;
        }
        return ans*ans*a;
    }
}

int main() {
    int a;
    int b;
    // here we are calculationg a to the power b using fast exponetial 
    cout<<"Enter no a: ";
    cin>>a;
    cout<<"Enter no b: ";
    cin>> b;
    cout<<fastPower(a, b);
    return 0;
}