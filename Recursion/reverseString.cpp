#include<iostream>
using namespace std;

void reverseString(string& s, int start, int end){ //if the string is not passed by reference then it will make a copy of the string and the changes will not be reflected in the main function.
    //base condition
    if(start>end){
        return ;
    }

    //processing
    char temp = s[start];
    s[start]= s[end];
    s[end] = temp;

    start = start + 1;
    end = end -1;
    reverseString(s, start, end);

}

int main() {
    string s = "abcdefg";
    int size = s.size();
    int start = 0;
    int end = size-1;

    cout<<"String before reversing: "<<s<<endl;

    // cout<<s[start+1]<<endl;
    // cout<<s[end-1]<<endl;
    
    reverseString(s, start, end);

    cout<<"String after reversing:"<<s;

    return 0;
}