#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    //Creating jaggered array:
    int row;
    cout<<"Enter no of rows: ";
    cin>>row;
    int **arr = new int*[row];
    vector<int> columns;
    for(int i=0;i<row;i++){
        int col;
        cout<<"Enter Col for row "<<i+1<<" :";
        cin>>col;
        columns.push_back(col);
        arr[i] = new int[col];
    }

    // taking input from user 
    for(int i=0;i<row;i++){
        int col = columns[i];
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //Output
    for(int i=0;i<row;i++){
        int col = columns[i];
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Releasing memory of jaggered array

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;


    return 0;
}