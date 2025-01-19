#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void uniqueOccurrences(vector<int> &arr){
    int i=0;
    while(i<arr.size()){
        int cnt=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        i++;
        checkDuplicate(i,arr);
        cout<<"i: "<<endl;
    }
}

int checkDuplicate(int i,vector<int> &arr){
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            i++;
            return checkDuplicate(i,arr);
        }
    }
    return i;


}
        
};




int main() {
    vector<int> arr = {1,2,2,1,1,3};
    Solution s;
    s.uniqueOccurrences(arr);
    return 0;
}