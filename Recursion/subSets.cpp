#include<iostream>
using namespace std;
#include<vector>

void subsets(vector<int> arr, vector<int> output, vector<vector<int>> &ans, int index){
    //base condition
    if(index>=arr.size()){
        ans.push_back(output);
        cout<<"return"<<endl<<endl<<endl;
        return;
    }

    //exclude
    cout<<"exclude"<<endl;
    subsets(arr,output,ans,index+1);

    //include
    cout<<"include"<<endl;
    output.push_back(arr[index]);
    subsets(arr,output,ans,index+1);
}

int main() {
    cout<<"hii"<<endl;
    vector<int> arr = {1,2,3};
    // cout<<"size "<<arr.size()<<endl;
    // return 0;
    // find all the subsets of array.
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    cout<<"calling"<<endl;
    subsets(arr, output, ans, index);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}