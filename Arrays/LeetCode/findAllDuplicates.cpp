/*Leetcode Link => https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/ */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/* This is naive based method which uses sorting 
    Time complexity O(nlogn)
    space complexity O(1)*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        vector<int> v;
        for(int i=0;i<size-1;i++){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};



/* Another Easies approach is that solve with:
    tme complexity = O(n)
    space complexity = O(1) */  

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> v;
        for(int i=0;i<nums.size();++i){
            int index = abs(nums[i])-1;
            if(nums[index]<0){
                v.push_back(abs(nums[i]));
            }
            nums[index] = -nums[index];    
        }
        return v;
    }
};