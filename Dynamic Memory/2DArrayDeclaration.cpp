#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int **arr = new int* [n];
    for(int i=0;i<n;i++){
        arr[i] = new int [n];
    }

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory from heap
    for(int i=0; i<n; i++){
        delete [] arr[i];
    }
    delete [] arr;
    
    return 0;
}