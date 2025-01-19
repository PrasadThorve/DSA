#include<iostream>
using namespace std;


int fibonacci(int i, int val,int n){
    //base case
    if(i==n){
        return val;
    }
    //processing
    i++;
    val+=val;
    if( val == 0 ){
        val=val+1;
    }

    // recursive call
    fibonacci(i,val,n);
    

}

int main() {
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int i=1;
    int val = 0;
    cout<<n<<"th fibonacci Number is: "<<fibonacci(i,val,n);
    return 0;
}