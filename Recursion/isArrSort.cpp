#include<iostream>
using namespace std;

bool isSort(int arr[], int size){
    //base condition
    if(size==1 || size==0){
        return true;
    }

    //processing
    if(*arr>*(arr+1)){
        return false;
    }
    else{
        arr = arr+1;
        size--;
        return isSort(arr,size);
    }
}

int main() {
    int arr[6] = {4,6,8,10,100};    
    int size = 5;


    // int ans = isSort(arr,size);
    // cout<<ans<<endl;
    
    if(isSort(arr,size)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }




    return 0;
}