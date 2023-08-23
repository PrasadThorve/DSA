#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(2);
    s.insert(8);
    s.insert(5);
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    //iterator in set-->
    set<int>::iterator it = s.find(6);
    for(auto itr = it;itr!=s.end();itr++){
       
        cout<<*itr<<" ";
    }cout<<endl;
    return 0;
}