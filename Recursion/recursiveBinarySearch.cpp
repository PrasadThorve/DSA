#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start,int end, int key){
    //base condition
    if(start>end){
        return false;
    }


    int mid = (start + end)/2;
    if(arr[mid]==key){
        return true;
    }

    else if(arr[mid]>key){ // left hand side
        end = mid-1;
        binarySearch(arr,start,end,key);
    }

    else if(arr[mid]<key){  //right hand side
        start = mid+1;
        binarySearch(arr,start,end,key);
    }

    //return false; //to avoid control reaches at non-void function
    
}

int main() {
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int start = 0;
    int end = 5;
    int key = 10;

    // cout<<binarySearch(arr,start,end,key)<<endl<<endl;

    if(binarySearch(arr,start,end,key)){
        cout<<"-----------> Present <-----------------";
    }
    else{
        cout<<"----------------> Absent <-----------------";
    }
    return 0;
}