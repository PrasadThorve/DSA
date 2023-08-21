/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false */

//code-->

class Solution {
private:
    bool checkEqual(int count1[26],int count2[26]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //1. Need to find permuations of string s1;
        //using find() check if the permutations are present or not.
        //Here we are not soloving using above method but using sliding window 
        int count1[26] = {0};
        for(int i=0;i<s1.size();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }
        int windowSize = s1.size();
        int count2[26]={0};
        int i=0;
        while(i<windowSize && i<s2.size()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count1,count2)){
            return 1;
        }
        while(i<s2.size()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
            char oldChar = s2[i-windowSize];
            index = oldChar-'a';
            count2[index]--;
            if(checkEqual(count1,count2)){
                return 1;
            }
            i++;

        }
        return 0;
    }
};