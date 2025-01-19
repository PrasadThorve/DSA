/* link => https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=0*/

//code 
#include <vector>
#include <iostream>
using namespace std;
// #include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> waveArr;
    for(int col=0;col<mCols;col++){
        if(col%2==0){
            for(int row=0;row<nRows;row++){
            waveArr.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=nRows-1;row>=0;row--){
                waveArr.push_back(arr[row][col]);
            }
        }

    }
    return waveArr;
}