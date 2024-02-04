#include<iostream>
#include<vector>
using namespace std;

void findPermuatations(string abc,vector<string>& ans,int index){
    //base condition
    if(index>=abc.size()){
        ans.push_back(abc);
        return;
    }

    //processing
    for(int i=index;i<abc.size();i++){
        swap(abc[index],abc[i]);
        findPermuatations(abc,ans,index+1);
        swap(abc[index],abc[i]);
    }
}

int main() {
    string abc = "abc";
    vector<string> ans;
    int index = 0;
    findPermuatations(abc,ans,index);
    cout<<"Permutations of string 'abc' are following: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}