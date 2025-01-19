#include<iostream>
#include<vector>
using namespace std;

    // bool present(vector<vector<int>> &ans, vector<int> temp){
    //     for(const auto& row : ans){
    //             if(row.size()==temp.size()){
    //                 vector<int> x;
    //                 for(auto element : row){
    //                     x.push_back(element);
    //                 }
    //                 if(x==temp){
    //                     return true;
    //                 }
                    
    //             }
                
    //     }

    //     return false;
    // }

    void present(vector<vector<int>> &ans, vector<int> temp){
        for(const auto& row : ans){
                if(row.size()==temp.size()){
                    vector<int> x;
                    for(auto element : row){
                        x.push_back(element);
                    }
                    if(x==temp){
                        cout<<"preset hai"<<endl;
                        return;
                        // return true;
                    }
                    
                }
                
        }

        cout<<"present nahi hai"<<endl;
        return;
       
    }

int main() {
    
    vector<vector<int>> ans = {{},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}};
    vector<int> temp = {1,2};

    // if(present(ans,temp)){
    //     cout<<"ha present hai"<<endl;
    // }
    // else{
    //     cout<<"nahi hai";
    // }

    present(ans,temp);
    


    // cout<<"begin: "<<*(myVect.begin())<<endl;
    // for(auto it = ans.begin(); it!=ans.end(); ++it){
    //     cout<<*it<<endl;
    // }
    return 0;
}