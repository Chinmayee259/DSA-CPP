// Descending bubblesort 
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n){
    
    for(int i = 0; i < n-1; i++){
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){  
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }

}

int main(){
    int arr[] = {4,2,7,8,3,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array : ";
    printArray(arr, n);
    cout << endl;
    bubbleSort(arr, n);
    cout << "After sorting : ";
    printArray(arr, n);
    return 0;
}



