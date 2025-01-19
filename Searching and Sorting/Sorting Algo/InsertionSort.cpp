#include <bits/stdc++.h> 
#include<vector>
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    int i=1;
    while(i<n){
        int temp=arr[i];
        int j = i-1;
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
}