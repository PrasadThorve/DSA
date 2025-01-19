/* link--> https://leetcode.com/problems/spiral-matrix/ */

//code Function
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int nRows = matrix.size();
        int nCols = matrix[0].size();
        
        int startingRow = 0;
        int startingCol = 0;
        int lastRow = nRows-1;
        int lastCol = nCols-1;
        
        int Total = nRows*nCols;
        int cnt=0;

        while(cnt<Total){
            //going right
            for(int index=startingCol;cnt<Total && index<=lastCol;index++){
                result.push_back(matrix[startingRow][index]);
                cnt++;
            }
            startingRow++;
            //going down
            for(int index=startingRow;cnt<Total && index<=lastRow;index++){
                result.push_back(matrix[index][lastCol]);
                cnt++;
            }
            lastCol--;

            //going left
            for(int index=lastCol ;cnt<Total && index>=startingCol;index--){
                result.push_back(matrix[lastRow][index]);
                cnt++;
            }
            lastRow--;
            //going up
            for(int index=lastRow;cnt<Total && index >= startingRow;index--){
                result.push_back(matrix[index][startingCol]);
                cnt++;
            }
            startingCol++;

        }

        return result;
    }
};