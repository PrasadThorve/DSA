#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(k==arr[mid]){
            ans=mid;
            end=mid-1;  
        }
        if(k<arr[mid]){
            end=mid-1;
        }
        if(k>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;  
}

int lastOcc(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(k==arr[mid]){
            ans=mid;
            start=mid+1;  
        }
        if(k<arr[mid]){
            end=mid-1;
        }
        if(k>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;  
}

int main(){
    int arr[] = {10,20,20,20,20,20,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=20;
    cout<<firstOcc(arr,n,k)<<" ";
    cout<<lastOcc(arr,n,k);

    return 0;
}