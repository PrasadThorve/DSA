/*
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.

 

Example 1:

Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    string removeOccurrences(string s, string part){
        int pos = s.find(part); //if string is not found it returns string::npos
        while(pos!=string::npos){
            s.erase(pos,part.size());
            pos=s.find(part);
        }
        return s;
    }
};

/* There is error in the below code: 
class Solution {
public:
    string removeOccurrences(string s, string part) {
        for(int i=0;i<s.size();i++){
            if(s[i]==part[0] && s[i+1]==part[1]){
                int flag = true;
                int index = i;
                for(int j=0;j<part.size();j++){
                    if(index<s.size() && s[index]==part[j]){
                        index++;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
            
                
                if(flag==true){
                    string temp;
                    int index=i;
                    int j=0;
                    while(j<s.size()){
                        if(j==index){
                            j=j+part.size();
                        }
                        else{
                            temp.push_back(s[j]);
                            j++;
                        }
                    }
                    s=temp;
                }
                
            }
            
        }
        return s;
    }
};*/

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    Solution o;
    cout<<o.removeOccurrences(s,part);
    return 0;
}