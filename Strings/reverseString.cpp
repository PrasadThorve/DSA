#include<iostream>
#include<vector>
using namespace std;



int main() {
    // vector<string> s =  {"h","e","l","l","o"};
    // cout<<s.size();
    // int i=0;
    // int j=s.size()-1;
    // while (i<j)
    // {
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }

    //char arr[10] = {"h","e","l","l","o","\0"};

    char arr[10] = {'E','h', 'e', 'l', 'l', 'o', '\0'};

    for(int i=0;arr[i]!='\0';i++){
        cout<<arr[i];
    }
    
    return 0;
}