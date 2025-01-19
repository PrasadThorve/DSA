/*
Geeks for geeks link : https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which is having the highest frequency.
*/

//Fuction 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        string dummy;
        vector<int> dum1;
        for(int i=0;i<str.size();i++){
            bool found = false;
            for(int j=i-1;j>=0;j--){
                if(str[i]==str[j]){
                    found=true;
                    break;
                }
            }
            if(found==false){
                int cnt = 1;
                for(int j=i+1;j<str.size();j++){
                    if(str[i]==str[j]){
                        cnt++;
                    }
                }
                dum1.push_back(cnt);
                dummy.push_back(str[i]);
            }
        }
        int max=0;
        for(int i=0;i<dum1.size();i++){
            if(dum1[i]>max){
                max = dum1[i];
            }
        }
        vector<char> index;
        for(int i=0;i<dum1.size();i++){
            if(dum1[i]==max){
                index.push_back(dummy[i]);
            }
        }
        sort(index.begin(),index.end());
        char c = index[0]; 
        return c;
    }

};



int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
