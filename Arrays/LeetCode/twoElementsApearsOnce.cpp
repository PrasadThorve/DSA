/* Question --> Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
leetcode link: https://leetcode.com/problems/single-number-iii/ 
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        cout<<"check";
        vector<int> result;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            bool flag=false;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    flag = true;
                    break;
                }
            }
            if(flag==false){
                result.push_back(nums[i]);
            }
            if(cnt==2){
                cout<<result[0]<<", "<<result[1];
                
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,1,3,2,5};
    vector<int> result = s.singleNumber(nums);
    cout<<endl<<"num1: "<<result[0]<<endl<<"num2: "<<result[1];
    return 0;
}

