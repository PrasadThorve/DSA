#include<iostream>
using namespace std;

int power(int n){
     if(n==0){ //base case
        return 1;
     }
     //Recursive Relation
     return 2*power(n-1);

}

int main() {
    int n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"2's power "<<n<<" is : ";
    cout<<power(n);
    return 0;
}