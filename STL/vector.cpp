#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {2,3,4,5,6};
    cout<<"size="<<v.capacity()<<endl;
    cout<<"Elements: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    vector<int> result;
    result.push_back(v[1]);
    cout<<"Result " << result[0];
    
    
    return 0;
}