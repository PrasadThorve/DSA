// Calculate gcd of two no. e.g. a = 72, b=24;

#include<iostream>
using namespace std;

//iterative approach;
int gcd(int a, int b){
    while(a>=0 && b>=0){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    
    if(a>=b){
        a=a-b;
    }
    else{
        b=b-a;
    }
    }
    
    
    return 0;
}

int lcm(int a, int b){
    int hcf = gcd(a,b);
    int lcm1 = a * b / hcf;
    return lcm1;
}

int main() {
    int a, b;
    cout<<"Enter no a: ";
    cin>>a;
    cout<<"Enter no b: ";
    cin>>b;
    cout<<"GCD="<<gcd(a,b)<<endl;
    cout<<"LCM="<<lcm(a,b)<<endl;
    return 0;
}