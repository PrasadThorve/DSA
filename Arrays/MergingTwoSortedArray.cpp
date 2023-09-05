/* https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        /*
        int size = m -n;
        for(int i=size;i<m;i++){
            nums1.pop_back();
        }
        for(int i = 0;i<n ;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        */

        // Two Pointer Approach
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j] ){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }

    }
};