/* A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;

// class Solution {
// public:
//     bool isPalindrome(string s) {
        
        
//     }
// };

int main(){
    string s = "A man, a plan, a canal: Panama";
    string modified;

    for(char c : s){
        if(isupper(c)){
            c=tolower(c);
            modified+=c;
        }
        else if(isalpha(c)){
            modified+=c;
        }
    }
    for(char c: modified){
        cout<<c;
    }

}