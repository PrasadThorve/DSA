class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back(nums);
        vector<int> emptySet{};
        ans.push_back(emptySet);
        findSubsets(nums,ans);

        return ans;
    }

    bool present(vector<vector<int>> &ans, vector<int> temp){
        for(const auto& row : ans){
                if(row.size()==temp.size()){
                    vector<int> x;
                    for(auto element : row){
                        x.push_back(element);
                    }
                    if(x==temp){
                        return true;
                    }
                    
                }
                
        }

        return false;
    }

    void findSubsets(vector<int> set,vector<vector<int>> &ans){
        //base condition
        if(set.empty()){
            return;
        }
        
        for(int i=0;i<set.size();i++){
            vector<int> temp = set;
            vector<int>:: iterator it = temp.begin() + i;
            temp.erase(it);
            if(!present(ans,temp)){
                ans.push_back(temp);
                findSubsets(temp,ans);
            }
            
        }
        


    }
};