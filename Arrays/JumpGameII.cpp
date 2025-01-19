/* leetcode link => https://leetcode.com/problems/jump-game-ii/?envType=study-plan-v2&envId=top-interview-150*/


class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int jump = 0;
        
        if(n==1){
            return 0;
        }
        while(i<n){
            jump++;
            int farthest = i + nums[i];
            if(farthest>=(n-1)){
                return jump;
            }
            vector<int> v;
            for(int j=i+1;j<=(i+nums[i]);j++){
                v.push_back(j+nums[j]);
            }
            i += maxIndex(v);  // write func maxi which return max of array
            
            
        }

        return 0;

    }

    int maxIndex(vector<int> v){
        int n = v.size();
        int maxi = 0;
        int maxIndex = -1;
        for(int i=0;i<n;i++){
            if(v[i]>maxi){
                maxi = v[i];
                maxIndex = i;
            }
        }
        maxIndex++;
        return maxIndex;
    }
};