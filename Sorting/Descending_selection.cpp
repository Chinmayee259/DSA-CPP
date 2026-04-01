// Increasing order 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int maxIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[maxIndex] < arr[j]){
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 1, 7, 2, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting : " << endl;
    printArray(arr, n);
    selectionSort(arr, n);
    cout << endl;
    cout << "Array after sorting : "<< endl;
    printArray(arr, n);
    return 0;
}