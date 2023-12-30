#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
#include<vector>

void findSub(string str, string output, vector<string>& ans,int index){
	//base condition
	if(index>=str.length()){
		ans.push_back(output);
		return;
	}

	//exclude
	findSub(str,output,ans,index+1);

	//include
	output.push_back(str[index]);
	findSub(str,output,ans,index+1);

}





int main() {
    
    string str = "abc";
	
	// Write your code here
	vector<string> ans;
	int index = 0; //index of str
	string output;
	findSub(str,output, ans, index);

    cout<<"Subsets"<<endl
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
	return 0;

	
}

