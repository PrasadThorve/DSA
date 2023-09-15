#include<iostream>
using namespace std;

// what happen if we use reference variable in Return Type
int& update(int n){
    int a = 10;
    int& ans = a;
    return ans;
}

int main() {
    int a = 20;
    cout<<update(a);
    return 0;
}