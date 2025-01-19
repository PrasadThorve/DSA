class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // k = k % n;
        
        // vector<int> ans;
        // for(int i=n-k;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // for(int i=0;i<(n-k);i++){
        //     ans.push_back(nums[i]);
        // }
        // nums = ans;

        // Second Method in O(1) space  - TLE for very big array
        // int n = nums.size();
        // k = k%n;
        // while(k>0){
        //     int temp = nums[n-1];
        //     for(int i=n-2;i>=0;i--){
        //         nums[i+1]=nums[i];
        //     }
        //     nums[0]=temp;
        //     k--;
        // }

       // Third Method
       int n = nums.size();
       k = k%n;
       int m = n-k;
       reverse(nums.begin(),nums.end()-k);
       reverse(nums.begin()+m, nums.end());
       reverse(nums.begin(),nums.end());
    }

};