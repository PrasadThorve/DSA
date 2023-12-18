#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int x){
    //base condition
    if(size==0){
        return false;
    }

    //processing
    if(x==arr[0]){
        return true;
    }
    else{
        arr = arr+1;
        size--;
        return linearSearch(arr,size,x);  //recursive call
    }
}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = 5;

    int x = 10;

    if(linearSearch(arr,size,x)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }
    
    return 0;
}