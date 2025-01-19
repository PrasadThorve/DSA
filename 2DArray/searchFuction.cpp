/*leet code link --> https://leetcode.com/problems/search-a-2d-matrix/submissions/ */



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int end = row*col-1;
        int start = 0;
        int mid = start + (end-start)/2;
        while(start<=end){
            int element  = matrix[mid/col][mid%col];
            if(element==target){

                return 1;
            }
            if(element>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid = start + (end-start)/2;
        }
        return 0;
    }
};