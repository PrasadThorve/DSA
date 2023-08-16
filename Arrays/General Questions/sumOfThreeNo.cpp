#include <bits/stdc++.h> 
#include<vector>
#include<iostream>

class sumOfThreeNo
{

public:
void findTriplets(vector<int>arr, int n, int K) {
vector<vector<int>> ans;
	int size=arr.size();
	for(int i=0;i<size-2;i++){
		if(arr[i]>=K){
			break;
		}
		for(int j=i+1;j<size-1;j++){
			if(arr[i]+arr[j]>=K){
				break;
			}
			for(int k=j+1;k<size;k++){
				if(arr[i]+arr[j]+arr[k]==K){
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					bool flag=false;
					for(int i=0;i<ans.size();i++){
						if(ans[i]==temp){
							flag=true;
							break;
						}
					}
					if(flag==false){
						ans.push_back(temp);
					}
					
					
				}
			}
		}
	}
	// if(ans.empty()){return -1;}
	// vector<int> t;
	// for(int i=0;i<ans.size();i++){
	// 	for(int j=i+1;j<ans.size();j++){
	// 		if(ans[i]==ans[j]){
	// 			ans.erase(j);
	// 		}
	// 	}
	// }
	// for(int i=0;i<t.size();i++){
		
	// 	ans.erase(ans.begin() + t[i]);
		
	// }
	return ans;
}

    
};



	// Write your code here.
	

int main(){

}



/* Conditions; 
must wriite if(ans.empty){return -1};
*/