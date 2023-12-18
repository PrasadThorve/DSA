#include<iostream>
using namespace std;

int power(int a, int b){
    // base condition 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    if(b%2==0){
        return (power(a,b/2))*(power(a,b/2));
    }
    
    if(b%2!=0){
        return a*(power(a,b/2))*(power(a,b/2));
    }
}

int main() {
    int a = 3;
    int b = 11;
    
    cout<<power(a,b);
    return 0;
}