#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st, int end){
    int mid = st + (end - st) / 2;
        
        if(tar < arr[mid]){
            return binarySearch(arr, tar, st , mid-1);
        }
        else if(tar > arr[mid]){
            return binarySearch(arr, tar, mid+1 , end);
        }
        else{
            return mid;
        }
        return -1;
    }
int main(){
    vector<int> arr1 = {-3, -1, 0, 5, 7, 9}; //odd

    vector<int> arr2 = {0,3,5,7,9}; //even

    int tar1 = 0;

    cout<<binarySearch(arr1, tar1, 0, arr1.size())<<endl;
    cout<<binarySearch(arr2, tar1, 0, arr2.size())<<endl;
    return 0;
}