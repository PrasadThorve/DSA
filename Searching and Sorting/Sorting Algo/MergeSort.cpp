#include<iostream>
#include<vector>
using namespace std;


void merge(int *arr,int start,int end,int mid,int &cnt){
     cout<<"merging"<<endl;
     cout<<"start-"<<start<<endl;
     cout<<"end-"<<end<<endl;
     cout<<"mid-"<<mid<<endl;
    
    int len1 = mid-start+1;
    int len2 = end-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k=start;
    cout<<"first: ";
    for(int i=0;i<len1;i++){
        first[i] = arr[k];
        k++;
        cout<<first[i]<<" ";
    }
    cout<<endl;
    
    cout<<"second: ";
    for(int i=0;i<len2;i++){
        second[i]= arr[k];
        k++;
        cout<<second[i]<<" ";
    }
    cout<<endl;

    int index1 = 0;
    int index2 = 0;
    int x = start;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[x]=first[index1];
            index1++;
            x++;
            cnt++;
        }
        else{
            arr[x]=second[index2];
            index2++;
            x++;
        }
    }
        
        while(index2<len2){
                arr[x]=second[index2];
                index2++;
                x++;
            }
        

        while(index1<len1){
                arr[x]=first[index1];
                index1++;
                x++;
            }
        
    delete []first;
    delete []second;

}

void mergeSort(int arr[], int start, int end, int &cnt){
    cout<<"calling"<<endl;

   


    //base condition
    if(start>=end){
        cout<<"return"<<endl;
        return;
    }

    int mid = start + (end-start)/2;

    //Sort the left part
    mergeSort(arr,start,mid,cnt);
    cout<<"left"<<endl;
    //sort the right part
    mergeSort(arr,mid+1,end,cnt);
    cout<<"right"<<endl;
    //merge two sorted arrays
    merge(arr,start,end,mid,cnt); 

    cout<<"merged: ";
    for(int i =0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}

int main() {
    int arr[] = {8,4,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    int cnt = 0;

    cout<<"before: ";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,start,end,cnt);
    cout<<"after: ";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Count------------>>> "<<cnt<<endl;
   
    return 0;
}