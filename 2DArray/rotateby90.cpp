/* Problem --> You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
*/

#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nRows = matrix.size();
        int nCols = matrix[0].size();

        vector<vector<int>> result=matrix;
        int row=0;
        int endCol=nCols-1;
        while(row<nRows){
            vector<int> temp;
            for(int col=0;col<nCols;col++){
                temp.push_back(matrix[row][col]);
            }
            for(int index=0;index<temp.size();index++){
                result[index][endCol] = temp[index];
            }
            endCol--;
        }
        matrix = result;
        
    }
};


int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(matrix);
}