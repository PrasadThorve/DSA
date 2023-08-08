/* Problem Statement - You have given an array of N size. there are 2m+1 elements in the array for every element except one element have pair in the array you have to find and return that unique element from the array who don't have pair */

//Function to find unique element

int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size;i++){
        bool found = false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                found=true;
                break;
            }
           
            }
                if(found==false){
                return arr[i];
        }
    }
}