/* Code must solve problem without using extra space: 
Input s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"];
Output : "blue is sky the"
*/
#include<vector>
#include<iostream>
using namespace std;

void reverseWords(char s[], int size){
    vector<char> m;
    for(int i=size-1;i>=0;i--){
        if(s[i]==' '){
            for(int j= i+1;s[j]!=' '&& j<size;j++){
                m.push_back(s[j]);
            }
            m.push_back(' ');
        }
        if(i==0){
            for(int j=i;s[j]!=' ';j++){
                m.push_back(s[j]);
            }
        }
    }
    for(int i=0;i<m.size();i++){
        cout<<m[i];
    }
    
}

int main() {
    char s[] = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    int size = sizeof(s)/sizeof(char);
    // cout<<size;
    reverseWords(s,size);
    return 0;
}