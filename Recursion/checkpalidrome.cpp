#include<iostream>
using namespace std;

bool palindrome(string s, int start, int end){ //if the string is not passed by reference then it will make a copy of the string and the changes will not be reflected in the main function.
    //base condition
    
    //condition 1
    if(start>end){
        return true;
    }

    //condition 2
    if(s[start]!=s[end]){
        return false;
    }
    

    return palindrome(s, start+1, end-1);

}

int main() {
    string s = "abcdcbadfd";
    int size = s.size();
    int start = 0;
    int end = size-1;

    if(palindrome(s,start,end)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    

    return 0;
}