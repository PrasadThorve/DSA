#include<iostream>
#include<vector>
using namespace std;

void keypad(vector<string> superSet, string output, string digits, int index, vector<string> &ans){

        //base condition
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }

        //processing
        int superIndex = (digits[index]-'0')-2;

        cout<<"SuperIndex "<<superIndex<<endl;
}

int main() {
        string digits = "23";
        vector<string> ans;
        int index = 0;
        vector<string> superSet = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;
        keypad(superSet,output,digits,index,ans);
    return 0;
}   