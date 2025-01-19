//Input == "aaaaaaaa"
//output == ""

#include<iostream>
using namespace std;

class Solution {
public:
    void removeDuplicates(string s) {
        
        int i=0;
        while(i<(s.size()-1)){
            int index = i;
            if(s[index]==s[index+1]){
                s.erase(index,2);
                i--;
                if(i<0){
                    i=0;
                }
                cout<<s<<endl;
                cout<<i<<endl;
                
            }
            else{
                i++;
                cout<<"check"<<endl;
            }
        }
        
    }   
};

int main(){
    string s = "aaaaaaaa";
    Solution m;
    m.removeDuplicates(s);
}