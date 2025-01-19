// #include <bits/stdc++.h> 
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
//     int start = 0;
//     int end = n-1;
    
//     while(start<=end){
//         mid = (start+end)/2;
//         if(k==arr[mid]){
//             while(k==arr[mid-1]){
//                 mid=mid-1;
//             }
//             cout<<mid<<" ";
//             while(k==arr[mid+1]){
//                 mid=mid+1;
//             }
//             cout<<mid;
//             return mid;
//         }
//         else if(k<arr[mid]){
//             end=mid-1;
//         }
//         else if(k>arr[mid]){
//             start=mid+1;
//         }
//     }
//     cout<<"-1";
// }

#include <iostream>
using namespace std;

int FirstLastOccurance(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(k==arr[mid]){
            while(k==arr[mid-1]){
                mid=mid-1;
            }
            cout<<mid<<" ";
            while(k==arr[mid+1]){
                mid=mid+1;
            }
            cout<<mid;
            return mid;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else if(k>arr[mid]){
            start=mid+1;
        }
    }
    cout<<"-1 -1";
    return -1;
}

int main(){
    int arr[] = {1,4,6,8,8,8,9,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=11;
    FirstLastOccurance(arr,n,k);
    return 0;

}
    