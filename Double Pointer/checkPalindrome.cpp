#include<iostream>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama23";
    string result;
    for(int c:s){
        if(isalnum(c)){
            result+=tolower(c);
        }
    }
    cout<<"s = "<<s<<endl;
    cout<<"result = "<<result<<endl;
    return 0;
}