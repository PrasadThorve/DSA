#include<iostream>
using namespace std;
/*
//Using another String
int main() {
    string s = "My name is Prasad";
    string p;
    // cout<<s; 
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            p.push_back('@');
            p.push_back('4');
            p.push_back('0');
        }
        else{
            p.push_back(s[i]);
        }
    }
    cout<<p;
    return 0;
}
*/

//using same string: 
int main() {
    string s = "My name is Prasad";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            for(int j=s.size()-1;j>i;j--){
                s[j+2]=s[j];
            }
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else{
             s.push_back(s[i]);
        }
    }
    cout<<s;
    return 0;
}