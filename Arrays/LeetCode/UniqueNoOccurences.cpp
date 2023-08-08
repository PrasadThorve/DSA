#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    void uniqueOccurrences(vector<int>& arr) {
        cout<<"check-2"<<endl;
        vector<int> v;
        int i=0;
        while(i<arr.size()){
            int cnt = 0;
            cout<<"count i at begining: "<<i<<endl;
            //find the count of elements
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            cout<<"count: "<<cnt<<endl;
            v.push_back(cnt);
            i++;
            cout<<"Check that: ";
            cout<<"i: "<<i<<endl;
            cout<<"call duplicate: "<<endl;
            duplicate(i,arr);
            cout<<"i at end: "<<i<<endl;
            cout<<"call complete "<<endl;
            cout<<endl;

            // cout<<i<<" ";
            // cout<<"CNT="<<cnt<<endl;
            
        }
        //we have stored cnt of unique elements in the array v.
        //if there is duplicate elememts in the v array then result is false else true
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        check(v);
    }

    int duplicate(int i, vector<int> arr){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                i++;
                return duplicate(i,arr);   
            }
        }
        return i;
    }

    void check(vector<int>& v){
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[i]==v[j] && i!=j){
                    cout<<"False";
                    return;
                }
            }
        }
        cout<<"True"; 
    }
};

int main(){
    vector<int> arr = {1,2,2,1,1,3,};
    Solution s;
    cout<<"check->1"<<endl;
    s.uniqueOccurrences(arr);
    return 0;
}
